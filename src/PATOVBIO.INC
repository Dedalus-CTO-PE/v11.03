.
. PATOVBIO    
. --------
. Filename     : patovbaf.dat
.
RSPTOVB1  RESET     KEY30                                                       
          READ      PATOVBA1,KEY30;;                                            
          RETURN
.
RAPTOVB1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATOVBA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTOVB1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATOVBA1,KEY30;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTOVB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATOVBA1;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:      
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTOVB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATOVBA1;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:      
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTOVB1                                                                        
          UPDATE    PATOVBA1;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:      
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTOVB1  RESET     KEY30                         
          UNPACK    KEY30,PTOBCNID,PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD
          WRITE     PATOVBA1,KEY30;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          RETURN
.
DEPTOVB1  RESET     KEY30                                                       
          DELETE    PATOVBA1,KEY30                                              
          RETURN
.
RLPTOVB1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATOVBA1,KEY30;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTOVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATOVBA1;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:      
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTOVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATOVBA1;PTOBCODE,PTOBFUND,PTOBTBLT,PTOBCSCD,PTOBBRCD:      
                        PTOBAMNT,PTOBCNID,PTOBSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTOVB1  RESET     KEY30                                                      
          UNLOCK    PATOVBA1                                                    
          RETURN
.
