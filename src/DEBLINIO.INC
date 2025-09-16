.
. DEBLINIO    
. --------
. Filename     : deblinaf.dat
.
RSDBLN1   RESET     KEY8                                                        
          READ      DEBLINA1,KEY8;;                                             
          RETURN
.
RADBLN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBLINA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBLN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBLINA1,KEY8;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:      
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBLN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBLINA1;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBLN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBLINA1;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBLN1                                                                         
          UPDATE    DEBLINA1;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBLN1   RESET     KEY8                                                        
          WRITE     DEBLINA1,KEY8;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:      
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          RETURN
.
DEDBLN1   RESET     KEY8                                                        
          DELETE    DEBLINA1,KEY8                                               
          RETURN
.
RLDBLN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     DEBLINA1,KEY8;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:      
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBLN1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBLINA1;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBLN1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBLINA1;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBLN1   RESET     KEY8                                                        
          UNLOCK    DEBLINA1                                                    
          RETURN
.
RSDBLN2   RESET     KEY43                                                       
          READ      DEBLINA2,KEY43;;                                            
          RETURN
.
RADBLN2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBLINA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBLN2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBLINA2,KEY43;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:     
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBLN2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBLINA2;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBLN2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBLINA2;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBLN2                                                                         
          UPDATE    DEBLINA2;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBLN2   RESET     KEY43                                                       
          WRITE     DEBLINA2,KEY43;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:     
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          RETURN
.
DEDBLN2   RESET     KEY43                                                       
          DELETE    DEBLINA2,KEY43                                              
          RETURN
.
RLDBLN2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     DEBLINA2,KEY43;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:     
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBLN2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBLINA2;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBLN2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBLINA2;DBLNDEB,DBLNNA1,DBLNNA2,DBLNAD1,DBLNAD2:           
                        DBLNAD3,DBLNAD4,DBLNPC,DBLNPH1,DBLNPH2,DBLNPH3:         
                        DBLNCON,DBLNACT,DBLNSTA,DBLNTEX,DBLNTER,DBLNWRN:        
                        DBLNLIN,DBLNPUR,DBLNBAD,DBLNCLM,DBLNUR1,DBLNUR2:        
                        DBLNUD1,DBLNUD2,DBLNUY1,DBLNUY2,DBLNUC1,DBLNUC2:        
                        DBLNUC3,DBLNUC4,DBLNSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBLN2   RESET     KEY43                                                       
          UNLOCK    DEBLINA2                                                    
          RETURN
.
