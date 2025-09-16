.
. MRTTDTIO    
. --------
. Filename     : mrttdtaf.dat
.
RSMRTDT1  RESET     KEY8                                                        
          READ      MRTTDTR1,KEY8;;                                             
          RETURN
.
RAMRTDT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTTDTR1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRTDT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTTDTR1,KEY8;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD: 
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTTDTR1;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD:      
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTTDTR1;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD:      
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRTDT1                                                                        
          UPDATE    MRTTDTR1;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD:      
                        MRTDDESC,MRTDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRTDT1  RESET     KEY8                                                        
          WRITE     MRTTDTR1,KEY8;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD: 
                        MRTDDESC,MRTDSPAR                                       
          RETURN
.
DEMRTDT1  RESET     KEY8                                                        
          DELETE    MRTTDTR1,KEY8                                               
          RETURN
.
RLMRTDT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     MRTTDTR1,KEY8;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD: 
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTTDTR1;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD:      
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTTDTR1;MRTDTMNO,MRTDRECT,MRTDSEQN,MRTDDEST,MRTDDECD:      
                        MRTDDESC,MRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRTDT1  RESET     KEY8                                                        
          UNLOCK    MRTTDTR1                                                    
          RETURN
.
