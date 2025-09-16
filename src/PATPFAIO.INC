.
. PATPFAIO    
. --------
. Filename     : patpfaaf.dat
.
RSPTPFA1  RESET     KEY8                                                        
          READ      PATPFAA1,KEY8;;                                             
          RETURN
.
RAPTPFA1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATPFAA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPFA1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATPFAA1,KEY8;PTPFINVN,PTPFIFDT,PTPFPLAN,PTPFSTAT,PTPFMODR: 
                                  PTPFWEBC,PTPFDATC,PTPFTIMC,PTPFWEBU,PTPFDATU: 
                                  PTPFTIMU,PTPFSPAR                             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPFA1  MOVE      ZERO,OVRCD                                                  
          READKS    PATPFAA1;PTPFINVN,PTPFIFDT,PTPFPLAN,PTPFSTAT,PTPFMODR:      
                             PTPFWEBC,PTPFDATC,PTPFTIMC,PTPFWEBU,PTPFDATU:      
                             PTPFTIMU,PTPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPFA1  MOVE      ZERO,OVRCD                                                  
          READKP    PATPFAA1;PTPFINVN,PTPFIFDT,PTPFPLAN,PTPFSTAT,PTPFMODR:      
                             PTPFWEBC,PTPFDATC,PTPFTIMC,PTPFWEBU,PTPFDATU:      
                             PTPFTIMU,PTPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPFA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATPFAA1;PTPFINVN,PTPFIFDT,PTPFPLAN,PTPFSTAT,PTPFMODR:      
                             PTPFWEBC,PTPFDATC,PTPFTIMC,PTPFWEBU,PTPFDATU:      
                             PTPFTIMU,PTPFSPAR                                  
          RETURN
.
WRPTPFA1  RESET     KEY8                                                        
          WRITE     PATPFAA1,KEY8;PTPFINVN,PTPFIFDT,PTPFPLAN,PTPFSTAT,PTPFMODR: 
                                  PTPFWEBC,PTPFDATC,PTPFTIMC,PTPFWEBU,PTPFDATU: 
                                  PTPFTIMU,PTPFSPAR                             
          RETURN
.
DEPTPFA1  RESET     KEY8                                                        
          DELETE    PATPFAA1,KEY8                                               
          RETURN
.
