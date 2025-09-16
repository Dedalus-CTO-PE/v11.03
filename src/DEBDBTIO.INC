.
. DEBDBTIO    
. --------
. Filename     : debdbtaf.dat
.
RSDBDB1   RESET     KEY8                                                        
          READ      DEBDBTA1,KEY8;;                                             
          RETURN
.
RADBDB1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBDBTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDB1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBDBTA1,KEY8;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:      
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDBTA1;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDBTA1;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDB1                                                                         
          UPDATE    DEBDBTA1;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDB1   RESET     KEY8                                                        
          WRITE     DEBDBTA1,KEY8;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:      
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
DEDBDB1   RESET     KEY8                                                        
          DELETE    DEBDBTA1,KEY8                                               
          RETURN
.
RLDBDB1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     DEBDBTA1,KEY8;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:      
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDBTA1;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDBTA1;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDB1   RESET     KEY8                                                        
          UNLOCK    DEBDBTA1                                                    
          RETURN
.
RSDBDB2   RESET     KEY43                                                       
          READ      DEBDBTA2,KEY43;;                                            
          RETURN
.
RADBDB2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDB2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA2,KEY43;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDBTA2;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDBTA2;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDB2                                                                         
          UPDATE    DEBDBTA2;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDB2   RESET     KEY43                                                       
          WRITE     DEBDBTA2,KEY43;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
DEDBDB2   RESET     KEY43                                                       
          DELETE    DEBDBTA2,KEY43                                              
          RETURN
.
RLDBDB2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDBTA2,KEY43;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDB2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDBTA2;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDB2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDBTA2;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDB2   RESET     KEY43                                                       
          UNLOCK    DEBDBTA2                                                    
          RETURN
.
RSDBDB3   RESET     KEY33                                                       
          READ      DEBDBTA3,KEY33;;                                            
          RETURN
.
RADBDB3   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA3,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDB3   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA3,KEY33;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDB3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDBTA3;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDB3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDBTA3;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDB3                                                                         
          UPDATE    DEBDBTA3;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDB3   RESET     KEY33                                                       
          WRITE     DEBDBTA3,KEY33;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
DEDBDB3   RESET     KEY33                                                       
          DELETE    DEBDBTA3,KEY33                                              
          RETURN
.
RLDBDB3   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDBTA3,KEY33;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDB3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDBTA3;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDB3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDBTA3;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDB3   RESET     KEY33                                                       
          UNLOCK    DEBDBTA3                                                    
          RETURN
.
RSDBDB4   RESET     KEY16                                                       
          READ      DEBDBTA4,KEY16;;                                            
          RETURN
.
RADBDB4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDB4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDBTA4,KEY16;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDB4                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDBTA4;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDB4                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDBTA4;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDB4                                                                         
          UPDATE    DEBDBTA4;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDB4   RESET     KEY16                                                       
          WRITE     DEBDBTA4,KEY16;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
DEDBDB4   RESET     KEY16                                                       
          DELETE    DEBDBTA4,KEY16                                              
          RETURN
.
RLDBDB4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDBTA4,KEY16;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:     
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDB4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDBTA4;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDB4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDBTA4;DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDB4   RESET     KEY16                                                       
          UNLOCK    DEBDBTA4                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBDB00
          MOVE      "   81",AUDTSECT
          MOVE      " 10",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBDB99 IF NOT EQUAL
.
          PACK     DBDBAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBDBAUDD
          CLOCK     TIME,DBDBAUDT
          MOVE      PORT,DBDBAUDP
          LOAD      DBDBAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBDBAUDS
          MOVE      PASSCODE,DBDBAUDO
          PACK      KEY19,DBDBAUDD,DBDBAUDT,DBDBAUDP,DBDBAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBDB
WADBDB99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBDB00
          MOVE      "   81",AUDTSECT
          MOVE      " 10",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBDB99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBDB
DADBDB99  RETURN
ASDBDB    RESET     KEY19                                                       
          READ      DEBAUDDB,KEY19;;                                            
          RETURN
.
AKDBDB                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDDB;DBDBAUDD,DBDBAUDT,DBDBAUDP,DBDBAUDR,DBDBAUDS:      
                    DBDBAUDO,DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBDB                                                                          
          UPDATE    DEBAUDDB;DBDBAUDD,DBDBAUDT,DBDBAUDP,DBDBAUDR,DBDBAUDS:      
                    DBDBAUDO,DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
AWDBDB    RESET     KEY19                                                       
          WRITE     DEBAUDDB,KEY19;DBDBAUDD,DBDBAUDT,DBDBAUDP,DBDBAUDR,DBDBAUDS:
                    DBDBAUDO,DBDBDEB,DBDBNA1,DBDBNA2,DBDBAD1,DBDBAD2:           
                        DBDBAD3,DBDBAD4,DBDBPC,DBDBPH1,DBDBPH2,DBDBPH3:         
                        DBDBCON,DBDBACT,DBDBSTA,DBDBTEX,DBDBTER,DBDBWRN:        
                        DBDBLIN,DBDBPUR,DBDBBAD,DBDBCLM,DBDBSORT,DBDBUR2:       
                        DBDBUD1,DBDBUD2,DBDBUY1,DBDBUY2,DBDBUC1,DBDBUC2:        
                        DBDBUC3,DBDBUC4,DBDBDISS,DBDBSPA                        
          RETURN
.
ADDBDB    RESET     KEY19                                                       
          DELETE    DEBAUDDB,KEY19;                                             
          RETURN
.
