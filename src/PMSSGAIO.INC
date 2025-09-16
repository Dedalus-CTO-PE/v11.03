.
. PMSSGAIO    
. --------
. Filename     : pmssgaaf.dat
.
RSPMSGA1  RESET     KEY26                                                       
          READ      PMSSGAA1,KEY26;;                                            
          RETURN
.
RAPMSGA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSGAA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSGA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSGAA1,KEY26;PMSGCLMN,PMSGHFND,PMSGHFTB,PMSGICDC,PMSGCLSS:
                        PMSGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSGA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSSGAA1;PMSGCLMN,PMSGHFND,PMSGHFTB,PMSGICDC,PMSGCLSS:      
                        PMSGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSGA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSSGAA1;PMSGCLMN,PMSGHFND,PMSGHFTB,PMSGICDC,PMSGCLSS:      
                        PMSGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSGA1                                                                        
          UPDATE    PMSSGAA1;PMSGCLMN,PMSGHFND,PMSGHFTB,PMSGICDC,PMSGCLSS:      
                        PMSGSPAR                                                
          RETURN
.
WRPMSGA1  RESET     KEY26                                                       
          WRITE     PMSSGAA1,KEY26;PMSGCLMN,PMSGHFND,PMSGHFTB,PMSGICDC,PMSGCLSS:
                        PMSGSPAR                                                
          RETURN
.
DEPMSGA1  RESET     KEY26                                                       
          DELETE    PMSSGAA1,KEY26                                              
          RETURN
.
