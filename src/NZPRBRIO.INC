.
. NZPRBRIO    
. --------
. Filename     : nzprbraf.dat
.
RSNZRBR1  RESET     KEY40                                                       
          READ      NZPRBRA1,KEY40;;                                            
          RETURN
.
RANZRBR1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRBRA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRBR1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRBRA1,KEY40;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRBR1  MOVE      ZERO,OVRCD
          READKS    NZPRBRA1;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRBR1  MOVE      ZERO,OVRCD
          READKP    NZPRBRA1;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRBR1  UPDATE    NZPRBRA1;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          RETURN
.
WRNZRBR1  RESET     KEY40                                                       
          WRITE     NZPRBRA1,KEY40;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          RETURN
.
DENZRBR1  RESET     KEY40                                                       
          DELETE    NZPRBRA1,KEY40                                              
          RETURN
.
