.
. FMSORAIO    
. --------
. Filename     : fmsoraaf.dat
.
RSFMOR1   RESET     KEY14                                                       
          READ      FMSORAA1,KEY14;;                                            
          RETURN
.
RAFMOR1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSORAA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMOR1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSORAA1,KEY14;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMOR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSORAA1;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMOR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSORAA1;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMOR1                                                                         
          UPDATE    FMSORAA1;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMOR1   RESET     KEY14                                                       
          WRITE     FMSORAA1,KEY14;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR          
          RETURN
.
DEFMOR1   RESET     KEY14                                                       
          DELETE    FMSORAA1,KEY14                                              
          RETURN
.
RLFMOR1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     FMSORAA1,KEY14;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMOR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSORAA1;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMOR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSORAA1;FMORLEDG,FMORACCT,FMORINTR,FMORSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMOR1   RESET     KEY14                                                       
          UNLOCK    FMSORAA1                                                    
          RETURN
.
