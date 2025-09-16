.
. PATRDCIO    
. --------
. Filename     : patrdcaf.dat
.
RSPTRDC1  RESET     KEY11                                                       
          READ      PATRDCA1,KEY11;;                                            
          RETURN
.
RAPTRDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATRDCA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATRDCA1,KEY11;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTRDC1  MOVE      ZERO,OVRCD                                                  
          READKS    PATRDCA1;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTRDC1  MOVE      ZERO,OVRCD                                                  
          READKP    PATRDCA1;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTRDC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATRDCA1;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTRDC1  RESET     KEY11                                                       
          WRITE     PATRDCA1,KEY11;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR          
          RETURN
.
DEPTRDC1  RESET     KEY11                                                       
          DELETE    PATRDCA1,KEY11                                              
          RETURN
.
RLPTRDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     PATRDCA1,KEY11;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTRDC1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATRDCA1;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTRDC1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATRDCA1;PTRCCODE,PTRCDESC,PTRCVRSN,PTRCSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTRDC1  RESET     KEY11                                                       
          UNLOCK    PATRDCA1                                                    
          RETURN
.
