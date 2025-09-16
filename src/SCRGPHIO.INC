.
. SCRGPHIO    
. --------
. Filename     : scrgphaf.dat
.
RSSCGP1   RESET     KEY6                                                        
          READ      SCRGPHA1,KEY6;;                                             
          RETURN
.
RASCGP1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SCRGPHA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCGP1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SCRGPHA1,KEY6;SCGPPER,SCGPITM,SCGPVAL,SCGPDES               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCGP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRGPHA1;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCGP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRGPHA1;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCGP1                                                                         
          UPDATE    SCRGPHA1;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          RETURN
.
WRSCGP1   RESET     KEY6                                                        
          WRITE     SCRGPHA1,KEY6;SCGPPER,SCGPITM,SCGPVAL,SCGPDES               
          RETURN
.
DESCGP1   RESET     KEY6                                                        
          DELETE    SCRGPHA1,KEY6                                               
          RETURN
.
RSSCGP2   RESET     KEY27                                                       
          READ      SCRGPHA2,KEY27;;                                            
          RETURN
.
RASCGP2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SCRGPHA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCGP2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SCRGPHA2,KEY27;SCGPPER,SCGPITM,SCGPVAL,SCGPDES              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCGP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRGPHA2;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCGP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRGPHA2;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCGP2                                                                         
          UPDATE    SCRGPHA2;SCGPPER,SCGPITM,SCGPVAL,SCGPDES                    
          RETURN
.
WRSCGP2   RESET     KEY27                                                       
          WRITE     SCRGPHA2,KEY27;SCGPPER,SCGPITM,SCGPVAL,SCGPDES              
          RETURN
.
DESCGP2   RESET     KEY27                                                       
          DELETE    SCRGPHA2,KEY27                                              
          RETURN
.
