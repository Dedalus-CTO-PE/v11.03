.
. ALLDLLIO    
. --------
. Filename     : alldllaf.dat
.
RSALDLL1  RESET     KEY3                                                        
          READ      ALLDLLA1,KEY3;;                                             
          RETURN
.
RAALDLL1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDLLA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDLL1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDLLA1,KEY3;ALDLDEPT,ALDLRACP,ALDLRACR,ALDLURAP,ALDLURAR: 
                        ALDLRPAT,ALDLRREF,ALDLPLAB,ALDLRACG,ALDLURAG,ALDLRRJG:  
                        ALDLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDLL1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLDLLA1;ALDLDEPT,ALDLRACP,ALDLRACR,ALDLURAP,ALDLURAR:      
                        ALDLRPAT,ALDLRREF,ALDLPLAB,ALDLRACG,ALDLURAG,ALDLRRJG:  
                        ALDLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDLL1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLDLLA1;ALDLDEPT,ALDLRACP,ALDLRACR,ALDLURAP,ALDLURAR:      
                        ALDLRPAT,ALDLRREF,ALDLPLAB,ALDLRACG,ALDLURAG,ALDLRRJG:  
                        ALDLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDLL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLDLLA1;ALDLDEPT,ALDLRACP,ALDLRACR,ALDLURAP,ALDLURAR:      
                        ALDLRPAT,ALDLRREF,ALDLPLAB,ALDLRACG,ALDLURAG,ALDLRRJG:  
                        ALDLSPAR                                                
          RETURN
.
WRALDLL1  RESET     KEY3                                                        
          WRITE     ALLDLLA1,KEY3;ALDLDEPT,ALDLRACP,ALDLRACR,ALDLURAP,ALDLURAR: 
                        ALDLRPAT,ALDLRREF,ALDLPLAB,ALDLRACG,ALDLURAG,ALDLRRJG:  
                        ALDLSPAR                                                
          RETURN
.
DEALDLL1  RESET     KEY3                                                        
          DELETE    ALLDLLA1,KEY3                                               
          RETURN
.
