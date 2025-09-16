.
. NZPRB1IO    
. --------
. Filename     : nzprb1af.dat
.
RSNZRB11  RESET     KEY40                                                       
          READ      NZPRBR11,KEY40;;                                            
          RETURN
.
RANZRB11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRBR11,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRB11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRBR11,KEY40;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRB11  MOVE      ZERO,OVRCD
          READKS    NZPRBR11;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRB11  MOVE      ZERO,OVRCD
          READKP    NZPRBR11;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRB11  UPDATE    NZPRBR11;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:      
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          RETURN
.
WRNZRB11  RESET     KEY40                                                       
          WRITE     NZPRBR11,KEY40;NZRBHOSP,NZRBCLMC,NZRBCNTR,NZRBFTAB,NZRBCPRC:
                        NZRBEFDT,NZRBBRCD,NZRBAMNT,NZRBSPAR                     
          RETURN
.
DENZRB11  RESET     KEY40                                                       
          DELETE    NZPRBR11,KEY40                                              
          RETURN
.
