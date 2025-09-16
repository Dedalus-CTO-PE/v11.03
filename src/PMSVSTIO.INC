.
. PMSVSTIO    
. --------
. Filename     : pmsvstaf.dat
.
RSPMVST1  RESET     KEY3                                                        
          READ      PMSVSTA1,KEY3;;                                             
          RETURN
.
RAPMVST1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSVSTA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVST1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSVSTA1,KEY3;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE: 
                                  PMVTSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVST1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVSTA1;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE:      
                             PMVTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVST1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVSTA1;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE:      
                             PMVTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVST1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVSTA1;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE:      
                             PMVTSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVST1  RESET     KEY3                                                        
          WRITE     PMSVSTA1,KEY3;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE: 
                                  PMVTSPAR                                      
          RETURN
.
DEPMVST1  RESET     KEY3                                                        
          DELETE    PMSVSTA1,KEY3                                               
          RETURN
.
RLPMVST1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     PMSVSTA1,KEY3;PMVTVSID,PMVTVSNM,PMVTVURL,PMVTFURL,PMVTHDPE: 
                                  PMVTSPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVST1  RESET     KEY3                                                        
          UNLOCK    PMSVSTA1                                                    
          RETURN
.
