.
. EMRVCDIO    
. --------
. Filename     : emrvcdaf.dat
.
RSEMVCD1  RESET     KEY14                                                       
          READ      EMRVCDA1,KEY14;;                                            
          RETURN
.
RAEMVCD1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVCDA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVCD1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVCDA1,KEY14;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMVCD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRVCDA1;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMVCD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRVCDA1;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMVCD1                                                                        
          UPDATE    EMRVCDA1;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVCD1  RESET     KEY14                                                       
          WRITE     EMRVCDA1,KEY14;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          RETURN
.
DEEMVCD1  RESET     KEY14                                                       
          DELETE    EMRVCDA1,KEY14                                              
          RETURN
.
RLEMVCD1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVCDA1,KEY14;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMVCD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRVCDA1;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMVCD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRVCDA1;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMVCD1  RESET     KEY14                                                       
          UNLOCK    EMRVCDA1                                                    
          RETURN
.
RSEMVCD2  RESET     KEY17                                                       
          READ      EMRVCDA2,KEY17;;                                            
          RETURN
.
RAEMVCD2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVCDA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVCD2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVCDA2,KEY17;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMVCD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRVCDA2;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMVCD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRVCDA2;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMVCD2                                                                        
          UPDATE    EMRVCDA2;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVCD2  RESET     KEY17                                                       
          WRITE     EMRVCDA2,KEY17;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          RETURN
.
DEEMVCD2  RESET     KEY17                                                       
          DELETE    EMRVCDA2,KEY17                                              
          RETURN
.
RLEMVCD2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVCDA2,KEY17;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMVCD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRVCDA2;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMVCD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRVCDA2;EMVCVIST,EMVCTYPE,EMVCUNIQ,EMVCCSYS,EMVCMNCD:      
                        EMVCSEQU,EMVCDATE,EMVCTIME,EMVCUDC1,EMVCUDC2,EMVCUDC3:  
                        EMVCUDC4,EMVCUDR1,EMVCUDR2,EMVCUYN1,EMVCUYN2,EMVCUYN3:  
                        EMVCUYN4,EMVCUDA1,EMVCUDA2,EMVCUDA3,EMVCUDA4,EMVCUDD1:  
                        EMVCUDD2,EMVCUDD3,EMVCUDD4,EMVCUDT1,EMVCUDT2,EMVCUDT3:  
                        EMVCUDT4,EMVCEFLG,EMVCLUDT,EMVCLUTM,EMVCWUSR,EMVCDELE:  
                        EMVCCDAT,EMVCCTIM,EMVCCUID,EMVCSUBN,EMVCEDAD,EMVCFTXT:  
                        EMVCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMVCD2  RESET     KEY17                                                       
          UNLOCK    EMRVCDA2                                                    
          RETURN
.
