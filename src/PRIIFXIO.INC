.
. PRIIFXIO    
. --------
. Filename     : priifxaf.dat
.
RSPRIFX1  RESET     KEY20                                                       
          READ      PRIIFXA1,KEY20;;                                            
          RETURN
.
RAPRIFX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIFXA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIFX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIFXA1,KEY20;PRIFINVN,PRIFCTYP,PRIFNOTE,PRIFLINE,PRIFCMNT:
                        PRIFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRIFX1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIIFXA1;PRIFINVN,PRIFCTYP,PRIFNOTE,PRIFLINE,PRIFCMNT:      
                        PRIFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRIFX1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIIFXA1;PRIFINVN,PRIFCTYP,PRIFNOTE,PRIFLINE,PRIFCMNT:      
                        PRIFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRIFX1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIIFXA1;PRIFINVN,PRIFCTYP,PRIFNOTE,PRIFLINE,PRIFCMNT:      
                        PRIFSPAR                                                
          RETURN
.
WRPRIFX1  RESET     KEY20                                                       
          WRITE     PRIIFXA1,KEY20;PRIFINVN,PRIFCTYP,PRIFNOTE,PRIFLINE,PRIFCMNT:
                        PRIFSPAR                                                
          RETURN
.
DEPRIFX1  RESET     KEY20                                                       
          DELETE    PRIIFXA1,KEY20                                              
          RETURN
.
