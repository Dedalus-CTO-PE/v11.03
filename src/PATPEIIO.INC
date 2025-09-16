.
. PATPEIIO    
. --------
. Filename     : patpeiaf.dat
.
RSPTPEI1  RESET     KEY16                                                       
          READ      PATPEIO1,KEY16;;                                            
          RETURN
.
RAPTPEI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPEI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO1,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RKPTPEI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATPEIO1;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RPPTPEI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATPEIO1;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UPPTPEI1                                                                        
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          UPDATE    PATPEIO1;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPEI1  RESET     KEY16                                                       
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          WRITE     PATPEIO1,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          RETURN
.
DEPTPEI1  RESET     KEY16                                                       
          DELETE    PATPEIO1,KEY16                                              
          RETURN
.
RLPTPEI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PATPEIO1,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
KLPTPEI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATPEIO1;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
PLPTPEI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATPEIO1;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UUPTPEI1  RESET     KEY16                                                       
          UNLOCK    PATPEIO1                                                    
          RETURN
.
RSPTPEI2  RESET     KEY17                                                       
          READ      PATPEIO2,KEY17;;                                            
          RETURN
.
RAPTPEI2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPEI2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO2,KEY17;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RKPTPEI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATPEIO2;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RPPTPEI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATPEIO2;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UPPTPEI2                                                                        
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          UPDATE    PATPEIO2;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPEI2  RESET     KEY17                                                       
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          WRITE     PATPEIO2,KEY17;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          RETURN
.
DEPTPEI2  RESET     KEY17                                                       
          DELETE    PATPEIO2,KEY17                                              
          RETURN
.
RLPTPEI2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PATPEIO2,KEY17;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
KLPTPEI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATPEIO2;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
PLPTPEI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATPEIO2;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UUPTPEI2  RESET     KEY17                                                       
          UNLOCK    PATPEIO2                                                    
          RETURN
.
RSPTPEI3  RESET     KEY16                                                       
          READ      PATPEIO3,KEY16;;                                            
          RETURN
.
RAPTPEI3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPEI3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPEIO3,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RKPTPEI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATPEIO3;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
RPPTPEI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATPEIO3;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UPPTPEI3                                                                        
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          UPDATE    PATPEIO3;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPEI3  RESET     KEY16                                                       
          MOVE      PTPEADMN,DPTPEADM                                           
          MOVE      PTPESTAT,DPTPESTA                                           
          WRITE     PATPEIO3,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          RETURN
.
DEPTPEI3  RESET     KEY16                                                       
          DELETE    PATPEIO3,KEY16                                              
          RETURN
.
RLPTPEI3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PATPEIO3,KEY16;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
KLPTPEI3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATPEIO3;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
PLPTPEI3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATPEIO3;PTPESTDT,DPTPEADM,DPTPESTA,PTPEDATE,PTPERESN:      
                        PTPEOPER,PTPESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTPEADM,PTPEADMN                                           
          MOVE      DPTPESTA,PTPESTAT                                           
          RETURN
.
UUPTPEI3  RESET     KEY16                                                       
          UNLOCK    PATPEIO3                                                    
          RETURN
.
