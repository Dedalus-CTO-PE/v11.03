.
. PMSFMSIO    
. --------
. Filename     : pmsfmsaf.dat
.
RSPMFMS1  RESET     KEY18                                                       
          READ      PMSFMSA1,KEY18;;                                            
          RETURN
.
RAPMFMS1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFMSA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFMS1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFMSA1,KEY18;PMFMHOSP,PMFMSYST,PMFMRSUB,PMFMCODE,PMFMFDIS:
                        PMFMFRES,PMFMFLED,PMFMFCRD,PMFMFDEB,PMFMGSTA,PMFMTDIS:  
                        PMFMTRES,PMFMTLED,PMFMTCRD,PMFMTDEB,PMFMBASC,PMFMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFMS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFMSA1;PMFMHOSP,PMFMSYST,PMFMRSUB,PMFMCODE,PMFMFDIS:      
                        PMFMFRES,PMFMFLED,PMFMFCRD,PMFMFDEB,PMFMGSTA,PMFMTDIS:  
                        PMFMTRES,PMFMTLED,PMFMTCRD,PMFMTDEB,PMFMBASC,PMFMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFMS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFMSA1;PMFMHOSP,PMFMSYST,PMFMRSUB,PMFMCODE,PMFMFDIS:      
                        PMFMFRES,PMFMFLED,PMFMFCRD,PMFMFDEB,PMFMGSTA,PMFMTDIS:  
                        PMFMTRES,PMFMTLED,PMFMTCRD,PMFMTDEB,PMFMBASC,PMFMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFMS1                                                                        
          UPDATE    PMSFMSA1;PMFMHOSP,PMFMSYST,PMFMRSUB,PMFMCODE,PMFMFDIS:      
                        PMFMFRES,PMFMFLED,PMFMFCRD,PMFMFDEB,PMFMGSTA,PMFMTDIS:  
                        PMFMTRES,PMFMTLED,PMFMTCRD,PMFMTDEB,PMFMBASC,PMFMSPAR   
          RETURN
.
WRPMFMS1  RESET     KEY18                                                       
          WRITE     PMSFMSA1,KEY18;PMFMHOSP,PMFMSYST,PMFMRSUB,PMFMCODE,PMFMFDIS:
                        PMFMFRES,PMFMFLED,PMFMFCRD,PMFMFDEB,PMFMGSTA,PMFMTDIS:  
                        PMFMTRES,PMFMTLED,PMFMTCRD,PMFMTDEB,PMFMBASC,PMFMSPAR   
          RETURN
.
DEPMFMS1  RESET     KEY18                                                       
          DELETE    PMSFMSA1,KEY18                                              
          RETURN
.
