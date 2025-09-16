.
. PATFMOIO    
. --------
. Filename     : patfmoaf.dat
.
RSPTFMO1  RESET     KEY17                                                       
          READ      PATFMOA1,KEY17;;                                            
          RETURN
.
RAPTFMO1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFMOA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFMO1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFMOA1,KEY17;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFMO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATFMOA1;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:      
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFMO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATFMOA1;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:      
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFMO1                                                                        
          UPDATE    PATFMOA1;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:      
                        PTFMSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTFMO1  RESET     KEY17                                                       
          WRITE     PATFMOA1,KEY17;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:
                        PTFMSPAR                                                
          RETURN
.
DEPTFMO1  RESET     KEY17                                                       
          DELETE    PATFMOA1,KEY17                                              
          RETURN
.
RLPTFMO1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PATFMOA1,KEY17;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTFMO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATFMOA1;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:      
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTFMO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATFMOA1;PTFMHFCD,PTFMHFTB,PTFMBTYP,PTFMSDAM,PTFMOVAM:      
                        PTFMSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTFMO1  RESET     KEY17                                                       
          UNLOCK    PATFMOA1                                                    
          RETURN
.
