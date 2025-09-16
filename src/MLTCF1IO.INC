.
. MLTCFNIO    
. --------
. Filename     : mltcfnaf.dat
.
RSMLCF11  RESET     KEY40                                                       
          READ      MLTCFN11,KEY40;;                                            
          RETURN
.
RAMLCF11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFN11,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCF11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFN11,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCF11                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCFN11;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCF11                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCFN11;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCF11                                                                        
          UPDATE    MLTCFN11;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
WRMLCF11  RESET     KEY40                                                       
          WRITE     MLTCFN11,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
DEMLCF11  RESET     KEY40                                                       
          DELETE    MLTCFN11,KEY40                                              
          RETURN
.
RSMLCF12  RESET     KEY40                                                       
          READ      MLTCFN12,KEY40;;                                            
          RETURN
.
RAMLCF12  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFN12,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCF12  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFN12,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCF12                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCFN12;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCF12                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCFN12;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCF12                                                                        
          UPDATE    MLTCFN12;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
WRMLCF12  RESET     KEY40                                                       
          WRITE     MLTCFN12,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
DEMLCF12  RESET     KEY40                                                       
          DELETE    MLTCFN12,KEY40                                              
          RETURN
.
