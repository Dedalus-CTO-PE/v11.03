.
. ALLMDTIO    
. --------
. Filename     : allmdtaf.dat
.
RSALMDT1  RESET     KEY25                                                       
          READ      ALLMDTA1,KEY25;;                                            
          RETURN
.
RAALMDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMDTA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMDTA1,KEY25;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMDTA1;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:      
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMDTA1;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:      
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMDT1                                                                        
          UPDATE    ALLMDTA1;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:      
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALMDT1  RESET     KEY25                                                       
          WRITE     ALLMDTA1,KEY25;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          RETURN
.
DEALMDT1  RESET     KEY25                                                       
          DELETE    ALLMDTA1,KEY25                                              
          RETURN
.
RLALMDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     ALLMDTA1,KEY25;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLMDTA1;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:      
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLMDTA1;ALMDVISN,ALMDENCN,ALMDTYPE,ALMDNOTE,ALMDDATE:      
                        ALMDTIME,ALMDUSER,ALMDOCCG,ALMDDELT,ALMDDDAT,ALMDDTIM:  
                        ALMDDUSE,ALMDDOCC,ALMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALMDT1  RESET     KEY25                                                       
          UNLOCK    ALLMDTA1                                                    
          RETURN
.
