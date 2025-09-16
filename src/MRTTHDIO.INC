.
. MRTTHDIO    
. --------
. Filename     : mrtthdaf.dat
.
RSMRTHD1  RESET     KEY4                                                        
          READ      MRTTHDR1,KEY4;;                                             
          RETURN
.
RAMRTHD1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTTHDR1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRTHD1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTTHDR1,KEY4;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTTHDR1;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTTHDR1;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRTHD1                                                                        
          UPDATE    MRTTHDR1;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRTHD1  RESET     KEY4                                                        
          WRITE     MRTTHDR1,KEY4;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR           
          RETURN
.
DEMRTHD1  RESET     KEY4                                                        
          DELETE    MRTTHDR1,KEY4                                               
          RETURN
.
RLMRTHD1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     MRTTHDR1,KEY4;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTTHDR1;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTTHDR1;MRTHTMID,MRTHDESC,MRTHACTV,MRTHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRTHD1  RESET     KEY4                                                        
          UNLOCK    MRTTHDR1                                                    
          RETURN
.
