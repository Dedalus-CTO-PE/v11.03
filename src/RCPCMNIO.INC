.
. RCPCMNIO    
. --------
. Filename     : rcpcmnaf.dat
.
RSRCCMN1  RESET     KEY20                                                       
          READ      RCPCMNA1,KEY20;;                                            
          RETURN
.
RARCCMN1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RCPCMNA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCCMN1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RCPCMNA1,KEY20;RCCMRECN,RCCMTCNT,RCCMLNNO,RCCMLNDA,RCCMCRDT:
                                   RCCMCRTM,RCCMCRUD,RCCMUPDT,RCCMUPTM,RCCMUPUD:
                                   RCCMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCCMN1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPCMNA1;RCCMRECN,RCCMTCNT,RCCMLNNO,RCCMLNDA,RCCMCRDT:      
                             RCCMCRTM,RCCMCRUD,RCCMUPDT,RCCMUPTM,RCCMUPUD:      
                             RCCMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCCMN1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPCMNA1;RCCMRECN,RCCMTCNT,RCCMLNNO,RCCMLNDA,RCCMCRDT:      
                             RCCMCRTM,RCCMCRUD,RCCMUPDT,RCCMUPTM,RCCMUPUD:      
                             RCCMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCCMN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPCMNA1;RCCMRECN,RCCMTCNT,RCCMLNNO,RCCMLNDA,RCCMCRDT:      
                             RCCMCRTM,RCCMCRUD,RCCMUPDT,RCCMUPTM,RCCMUPUD:      
                             RCCMSPAR                                           
          RETURN
.
WRRCCMN1  RESET     KEY20                                                       
          WRITE     RCPCMNA1,KEY20;RCCMRECN,RCCMTCNT,RCCMLNNO,RCCMLNDA,RCCMCRDT:
                                   RCCMCRTM,RCCMCRUD,RCCMUPDT,RCCMUPTM,RCCMUPUD:
                                   RCCMSPAR                                     
          RETURN
.
DERCCMN1  RESET     KEY20                                                       
          DELETE    RCPCMNA1,KEY20                                              
          RETURN
.
