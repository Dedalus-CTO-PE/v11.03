.
. FMSBRIIO    
. --------
. Filename     : fmsbriaf.dat
.
RSFMBR1   RESET     KEY3                                                        
          READ      FMSBRIA1,KEY3;;                                             
          RETURN
.
RAFMBR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBRIA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBRIA1,KEY3;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:      
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBRIA1;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBRIA1;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBR1                                                                         
          UPDATE    FMSBRIA1;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMBR1   RESET     KEY3                                                        
          WRITE     FMSBRIA1,KEY3;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:      
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          RETURN
.
DEFMBR1   RESET     KEY3                                                        
          DELETE    FMSBRIA1,KEY3                                               
          RETURN
.
RLFMBR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     FMSBRIA1,KEY3;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:      
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMBR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSBRIA1;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMBR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSBRIA1;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMBR1   RESET     KEY3                                                        
          UNLOCK    FMSBRIA1                                                    
          RETURN
.
RSFMBR2   RESET     KEY55                                                       
          READ      FMSBRIA2,KEY55;;                                            
          RETURN
.
RAFMBR2   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBRIA2,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBR2   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBRIA2,KEY55;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:     
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBR2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBRIA2;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBR2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBRIA2;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBR2                                                                         
          UPDATE    FMSBRIA2;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMBR2   RESET     KEY55                                                       
          WRITE     FMSBRIA2,KEY55;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:     
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          RETURN
.
DEFMBR2   RESET     KEY55                                                       
          DELETE    FMSBRIA2,KEY55                                              
          RETURN
.
RLFMBR2   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READL     FMSBRIA2,KEY55;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:     
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMBR2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSBRIA2;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMBR2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSBRIA2;FMBRRID,FMBRDES,FMBRBSC,FMBRCHQ,FMBRNOR:           
                        FMBRLOG,FMBRLED,FMBRDAC,FMBRCAC,FMBRDIS,FMBRRES:        
                        FMBRTDS,FMBRTRF,FMBRAUT,FMBRUR1,FMBRUR2,FMBRUD1:        
                        FMBRUD2,FMBRUY1,FMBRUY2,FMBRSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMBR2   RESET     KEY55                                                       
          UNLOCK    FMSBRIA2                                                    
          RETURN
.
