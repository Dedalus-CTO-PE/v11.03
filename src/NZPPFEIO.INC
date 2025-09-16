.
. NZPPFEIO    
. --------
. Filename     : nzppfeaf.dat
.
RSNZPFE1  RESET     KEY37                                                       
          READ      NZPPFEA1,KEY37;;                                            
          RETURN
.
RANZPFE1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPFEA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPFE1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPFEA1,KEY37;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPFE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPPFEA1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPFE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPPFEA1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPFE1                                                                        
          UPDATE    NZPPFEA1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          RETURN
.
WRNZPFE1  RESET     KEY37                                                       
          WRITE     NZPPFEA1,KEY37;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          RETURN
.
DENZPFE1  RESET     KEY37                                                       
          DELETE    NZPPFEA1,KEY37                                              
          RETURN
.
