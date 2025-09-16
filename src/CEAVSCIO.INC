.
. CEAVSCIO    
. --------
. Filename     : ceavscaf.dat
.
RSCEVS1   RESET     KEY2                                                        
          READ      CEAVSCA1,KEY2;;                                             
          RETURN
.
RACEVS1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CEAVSCA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEVS1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CEAVSCA1,KEY2;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:      
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEVS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAVSCA1;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEVS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAVSCA1;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEVS1                                                                         
          UPDATE    CEAVSCA1;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          RETURN
.
WRCEVS1   RESET     KEY2                                                        
          WRITE     CEAVSCA1,KEY2;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:      
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          RETURN
.
DECEVS1   RESET     KEY2                                                        
          DELETE    CEAVSCA1,KEY2                                               
          RETURN
.
RSCEVS2   RESET     KEY4                                                        
          READ      CEAVSCA2,KEY4;;                                             
          RETURN
.
RACEVS2   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEAVSCA2,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEVS2   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEAVSCA2,KEY4;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:      
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEVS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAVSCA2;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEVS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAVSCA2;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEVS2                                                                         
          UPDATE    CEAVSCA2;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:           
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          RETURN
.
WRCEVS2   RESET     KEY4                                                        
          WRITE     CEAVSCA2,KEY4;CEVSCAT,CEVSDES,CEVSSEQ,CEVSUR1,CEVSUR2:      
                        CEVSUD1,CEVSUD2,CEVSUY1,CEVSUY2,CEVSSPA                 
          RETURN
.
DECEVS2   RESET     KEY4                                                        
          DELETE    CEAVSCA2,KEY4                                               
          RETURN
.
