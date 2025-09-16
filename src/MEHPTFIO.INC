.
. MEHPTFIO    
. --------
. Filename     : mehptfaf.dat
.
RSMHPTF1  RESET     KEY11                                                       
          READ      MEHPTFA1,KEY11;;                                            
          RETURN
.
RAMHPTF1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPTFA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPTF1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPTFA1,KEY11;MHPFXDAT,MHPFXNUM,MHPFSORG,MHPFSTAT,MHPFFDAT:
                        MHPFTDAT,MHPFRDNO,MHPFRDER,MHPFRDWN,MHPFLSNO,MHPFLSER:  
                        MHPFLSWN,MHPFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPTF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPTFA1;MHPFXDAT,MHPFXNUM,MHPFSORG,MHPFSTAT,MHPFFDAT:      
                        MHPFTDAT,MHPFRDNO,MHPFRDER,MHPFRDWN,MHPFLSNO,MHPFLSER:  
                        MHPFLSWN,MHPFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPTF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPTFA1;MHPFXDAT,MHPFXNUM,MHPFSORG,MHPFSTAT,MHPFFDAT:      
                        MHPFTDAT,MHPFRDNO,MHPFRDER,MHPFRDWN,MHPFLSNO,MHPFLSER:  
                        MHPFLSWN,MHPFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPTF1                                                                        
          UPDATE    MEHPTFA1;MHPFXDAT,MHPFXNUM,MHPFSORG,MHPFSTAT,MHPFFDAT:      
                        MHPFTDAT,MHPFRDNO,MHPFRDER,MHPFRDWN,MHPFLSNO,MHPFLSER:  
                        MHPFLSWN,MHPFSPAR                                       
          RETURN
.
WRMHPTF1  RESET     KEY11                                                       
          WRITE     MEHPTFA1,KEY11;MHPFXDAT,MHPFXNUM,MHPFSORG,MHPFSTAT,MHPFFDAT:
                        MHPFTDAT,MHPFRDNO,MHPFRDER,MHPFRDWN,MHPFLSNO,MHPFLSER:  
                        MHPFLSWN,MHPFSPAR                                       
          RETURN
.
DEMHPTF1  RESET     KEY11                                                       
          DELETE    MEHPTFA1,KEY11                                              
          RETURN
.
