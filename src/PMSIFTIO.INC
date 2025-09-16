.
. PMSIFTIO    
. --------
. Filename     : pmsiftaf.dat
.
RSPMIFT1  RESET     KEY8                                                        
          READ      PMSIFTA1,KEY8;;                                             
          RETURN
.
RAPMIFT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIFTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIFT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIFTA1,KEY8;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT: 
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIFT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSIFTA1;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIFT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSIFTA1;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIFT1                                                                        
          UPDATE    PMSIFTA1;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
WRPMIFT1  RESET     KEY8                                                        
          WRITE     PMSIFTA1,KEY8;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT: 
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
DEPMIFT1  RESET     KEY8                                                        
          DELETE    PMSIFTA1,KEY8                                               
          RETURN
.
RSPMIFT2  RESET     KEY16                                                       
          READ      PMSIFTA2,KEY16;;                                            
          RETURN
.
RAPMIFT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIFTA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIFT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIFTA2,KEY16;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIFT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSIFTA2;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIFT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSIFTA2;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIFT2                                                                        
          UPDATE    PMSIFTA2;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
WRPMIFT2  RESET     KEY16                                                       
          WRITE     PMSIFTA2,KEY16;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
DEPMIFT2  RESET     KEY16                                                       
          DELETE    PMSIFTA2,KEY16                                              
          RETURN
.
RSPMIFT3  RESET     KEY18                                                       
          READ      PMSIFTA3,KEY18;;                                            
          RETURN
.
RAPMIFT3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIFTA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIFT3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIFTA3,KEY18;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIFT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSIFTA3;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIFT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSIFTA3;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIFT3                                                                        
          UPDATE    PMSIFTA3;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:      
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
WRPMIFT3  RESET     KEY18                                                       
          WRITE     PMSIFTA3,KEY18;PMIFURNO,PMIFADMN,PMIFVTYP,PMIFCLOC,PMIFICAT:
                        PMIFITYP,PMIFILOC,PMIFIDTE,PMIFITIM,PMIFLVIS,PMIFDTIS:  
                        PMIFTMIS,PMIFDPND,PMIFLTGP,PMIFGVTN,PMIFGVTC,PMIFSPAR   
          RETURN
.
DEPMIFT3  RESET     KEY18                                                       
          DELETE    PMSIFTA3,KEY18                                              
          RETURN
.
