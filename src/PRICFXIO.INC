.
. PRICFXIO    
. --------
. Filename     : pricfxaf.dat
.
RSPRCFX1  RESET     KEY39                                                       
          READ      PRICFXA1,KEY39;;                                            
          RETURN
.
RAPRCFX1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PRICFXA1,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCFX1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PRICFXA1,KEY39;PRCFUNIQ,PRCFPRAC,PRCFDOCT,PRCFPIND,PRCFCTYP:
                                   PRCFNOTE,PRCFLINE,PRCFCMNT,PRCFSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCFX1  MOVE      ZERO,OVRCD                                                  
          READKS    PRICFXA1;PRCFUNIQ,PRCFPRAC,PRCFDOCT,PRCFPIND,PRCFCTYP:      
                             PRCFNOTE,PRCFLINE,PRCFCMNT,PRCFSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCFX1  MOVE      ZERO,OVRCD                                                  
          READKP    PRICFXA1;PRCFUNIQ,PRCFPRAC,PRCFDOCT,PRCFPIND,PRCFCTYP:      
                             PRCFNOTE,PRCFLINE,PRCFCMNT,PRCFSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCFX1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRICFXA1;PRCFUNIQ,PRCFPRAC,PRCFDOCT,PRCFPIND,PRCFCTYP:      
                             PRCFNOTE,PRCFLINE,PRCFCMNT,PRCFSPAR                
          RETURN
.
WRPRCFX1  RESET     KEY39                                                       
          WRITE     PRICFXA1,KEY39;PRCFUNIQ,PRCFPRAC,PRCFDOCT,PRCFPIND,PRCFCTYP:
                                   PRCFNOTE,PRCFLINE,PRCFCMNT,PRCFSPAR          
          RETURN
.
DEPRCFX1  RESET     KEY39                                                       
          DELETE    PRICFXA1,KEY39                                              
          RETURN
.
