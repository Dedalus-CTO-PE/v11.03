.
. ALLBILIO    
. --------
. Filename     : allbilaf.dat
.
RSALBIL1  RESET     KEY16                                                       
          READ      ALLBILA1,KEY16;;                                            
          RETURN
.
RAALBIL1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLBILA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALBIL1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLBILA1,KEY16;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALBIL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLBILA1;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:      
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALBIL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLBILA1;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:      
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALBIL1                                                                        
          UPDATE    ALLBILA1;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:      
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALBIL1  RESET     KEY16                                                       
          WRITE     ALLBILA1,KEY16;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          RETURN
.
DEALBIL1  RESET     KEY16                                                       
          DELETE    ALLBILA1,KEY16                                              
          RETURN
.
RLALBIL1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLBILA1,KEY16;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALBIL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLBILA1;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:      
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALBIL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLBILA1;ALBIDEPT,ALBICOMP,ALBISERV,ALBITIME,ALBIITEM:      
                        ALBICDAT,ALBICTIM,ALBICUIT,ALBIUDAT,ALBIUTIM,ALBIUUID:  
                        ALBISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALBIL1  RESET     KEY16                                                       
          UNLOCK    ALLBILA1                                                    
          RETURN
.
