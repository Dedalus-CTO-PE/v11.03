.
. MLTCODIO    
. --------
. Filename     : mltcodaf.dat
.
RSMLCOD1  RESET     KEY8                                                        
          READ      MLTCODA1,KEY8;;                                             
          RETURN
.
RAMLCOD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MLTCODA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCOD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MLTCODA1,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCOD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCODA1;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCOD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCODA1;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCOD1                                                                        
          UPDATE    MLTCODA1;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMLCOD1  RESET     KEY8                                                        
          WRITE     MLTCODA1,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          RETURN
.
DEMLCOD1  RESET     KEY8                                                        
          DELETE    MLTCODA1,KEY8                                               
          RETURN
.
RLMLCOD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     MLTCODA1,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMLCOD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MLTCODA1;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMLCOD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MLTCODA1;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMLCOD1  RESET     KEY8                                                        
          UNLOCK    MLTCODA1                                                    
          RETURN
.
RSMLCOD2  RESET     KEY8                                                        
          READ      MLTCODA2,KEY8;;                                             
          RETURN
.
RAMLCOD2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MLTCODA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCOD2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MLTCODA2,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCOD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCODA2;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCOD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCODA2;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCOD2                                                                        
          UPDATE    MLTCODA2;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMLCOD2  RESET     KEY8                                                        
          WRITE     MLTCODA2,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          RETURN
.
DEMLCOD2  RESET     KEY8                                                        
          DELETE    MLTCODA2,KEY8                                               
          RETURN
.
RLMLCOD2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     MLTCODA2,KEY8;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMLCOD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MLTCODA2;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMLCOD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MLTCODA2;MLCOHOSP,MLCOTCOD,MLCOACOD,MLCOSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMLCOD2  RESET     KEY8                                                        
          UNLOCK    MLTCODA2                                                    
          RETURN
.
