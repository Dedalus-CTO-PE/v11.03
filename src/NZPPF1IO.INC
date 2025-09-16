.
. NZPPF1IO    
. --------
. Filename     : nzppf1af.dat
.
RSNZPF11  RESET     KEY37                                                       
          READ      NZPPF1A1,KEY37;;                                            
          RETURN
.
RANZPF11  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPF1A1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPF11  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPF1A1,KEY37;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPF11  MOVE      ZERO,OVRCD
          READKS    NZPPF1A1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPF11  MOVE      ZERO,OVRCD
          READKP    NZPPF1A1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPF11  UPDATE    NZPPF1A1;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:      
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          RETURN
.
WRNZPF11  RESET     KEY37                                                       
          WRITE     NZPPF1A1,KEY37;NZPFHOSP,NZPFCLMC,NZPFCNTR,NZPFFTAB,NZPFCPRC:
                        NZPFEFDT,NZPFCONT,NZPFHPOR,NZPFPPOR,NZPFDES1,NZPFDES2:  
                        NZPFRBRK,NZPFIBRK,NZPFCDAT,NZPFCTIM,NZPFCUID,NZPFUDAT:  
                        NZPFUTIM,NZPFUUID,NZPFSPAR                              
          RETURN
.
DENZPF11  RESET     KEY37                                                       
          DELETE    NZPPF1A1,KEY37                                              
          RETURN
.
