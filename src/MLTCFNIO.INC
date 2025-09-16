.
. MLTCFNIO    
. --------
. Filename     : mltcfnaf.dat
.
RSMLCFN1  RESET     KEY40                                                       
          READ      MLTCFNA1,KEY40;;                                            
          RETURN
.
RAMLCFN1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFNA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCFN1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFNA1,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCFN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCFNA1;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCFN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCFNA1;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCFN1                                                                        
          UPDATE    MLTCFNA1;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
WRMLCFN1  RESET     KEY40                                                       
          WRITE     MLTCFNA1,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
DEMLCFN1  RESET     KEY40                                                       
          DELETE    MLTCFNA1,KEY40                                              
          RETURN
.
RSMLCFN2  RESET     KEY40                                                       
          READ      MLTCFNA2,KEY40;;                                            
          RETURN
.
RAMLCFN2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFNA2,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLCFN2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      MLTCFNA2,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLCFN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTCFNA2;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLCFN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTCFNA2;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLCFN2                                                                        
          UPDATE    MLTCFNA2;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:      
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
WRMLCFN2  RESET     KEY40                                                       
          WRITE     MLTCFNA2,KEY40;MLCFHOSP,MLCFCLMC,MLCFCNTR,MLCFPROC,MLCFSTYP:
                        MLCFSDAT,MLCFHCPC,MLCFSPAR                              
          RETURN
.
DEMLCFN2  RESET     KEY40                                                       
          DELETE    MLTCFNA2,KEY40                                              
          RETURN
.
