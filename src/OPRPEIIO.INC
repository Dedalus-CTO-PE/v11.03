.
. OPRPEIIO    
. --------
. Filename     : oprpeiaf.dat
.
RSOPPEI1  RESET     KEY13                                                       
          READ      OPRPEIA1,KEY13;;                                            
          RETURN
.
RAOPPEI1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPEIA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPEI1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPEIA1,KEY13;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
RKOPPEI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRPEIA1;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
RPOPPEI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRPEIA1;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
UPOPPEI1                                                                        
          MOVE      OPPECNTR,DOPPECNT                                           
          UPDATE    OPRPEIA1;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPEI1  RESET     KEY13                                                       
          MOVE      OPPECNTR,DOPPECNT                                           
          WRITE     OPRPEIA1,KEY13;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          RETURN
.
DEOPPEI1  RESET     KEY13                                                       
          DELETE    OPRPEIA1,KEY13                                              
          RETURN
.
RLOPPEI1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPEIA1,KEY13;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
KLOPPEI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OPRPEIA1;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
PLOPPEI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OPRPEIA1;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
UUOPPEI1  RESET     KEY13                                                       
          UNLOCK    OPRPEIA1                                                    
          RETURN
.
RSOPPEI2  RESET     KEY19                                                       
          READ      OPRPEIA2,KEY19;;                                            
          RETURN
.
RAOPPEI2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPEIA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPEI2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPEIA2,KEY19;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
RKOPPEI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRPEIA2;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
RPOPPEI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRPEIA2;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
UPOPPEI2                                                                        
          MOVE      OPPECNTR,DOPPECNT                                           
          UPDATE    OPRPEIA2;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPEI2  RESET     KEY19                                                       
          MOVE      OPPECNTR,DOPPECNT                                           
          WRITE     OPRPEIA2,KEY19;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          RETURN
.
DEOPPEI2  RESET     KEY19                                                       
          DELETE    OPRPEIA2,KEY19                                              
          RETURN
.
RLOPPEI2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPEIA2,KEY19;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
KLOPPEI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OPRPEIA2;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
PLOPPEI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OPRPEIA2;OPPEUNID,OPPETMNO,OPPECODE,DOPPECNT,OPPEQUAN:      
                        OPPECHRG,OPPEBROK,OPPESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPECNT,OPPECNTR                                           
          RETURN
.
UUOPPEI2  RESET     KEY19                                                       
          UNLOCK    OPRPEIA2                                                    
          RETURN
.
