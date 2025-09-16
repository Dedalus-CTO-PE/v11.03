.
. HL7FAGIO    
. --------
. Filename     : hl7fagaf.dat
.
RSHLFAG1  RESET     KEY78                                                       
          READ      HL7FAGA1,KEY78;;                                            
          RETURN
.
RAHLFAG1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAGA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAG1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAGA1,KEY78;HLAGRSID,HLAGVRID,HLAGCNT1,HLAGRARE,HLAGRATY:
                                   HLAGRADI,HLAGRAUS,HLAGRISY,HLAGRIVA,HLAGRITX:
                                   HLAGRCSY,HLAGRCVE,HLAGRCCO,HLAGRCDI,HLAGRCUS:
                                   HLAGRPST,HLAGRREN,HLAGSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAG1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAGA1;HLAGRSID,HLAGVRID,HLAGCNT1,HLAGRARE,HLAGRATY:      
                             HLAGRADI,HLAGRAUS,HLAGRISY,HLAGRIVA,HLAGRITX:      
                             HLAGRCSY,HLAGRCVE,HLAGRCCO,HLAGRCDI,HLAGRCUS:      
                             HLAGRPST,HLAGRREN,HLAGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAG1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAGA1;HLAGRSID,HLAGVRID,HLAGCNT1,HLAGRARE,HLAGRATY:      
                             HLAGRADI,HLAGRAUS,HLAGRISY,HLAGRIVA,HLAGRITX:      
                             HLAGRCSY,HLAGRCVE,HLAGRCCO,HLAGRCDI,HLAGRCUS:      
                             HLAGRPST,HLAGRREN,HLAGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAGA1;HLAGRSID,HLAGVRID,HLAGCNT1,HLAGRARE,HLAGRATY:      
                             HLAGRADI,HLAGRAUS,HLAGRISY,HLAGRIVA,HLAGRITX:      
                             HLAGRCSY,HLAGRCVE,HLAGRCCO,HLAGRCDI,HLAGRCUS:      
                             HLAGRPST,HLAGRREN,HLAGSPAR                         
          RETURN
.
WRHLFAG1  RESET     KEY78                                                       
          WRITE     HL7FAGA1,KEY78;HLAGRSID,HLAGVRID,HLAGCNT1,HLAGRARE,HLAGRATY:
                                   HLAGRADI,HLAGRAUS,HLAGRISY,HLAGRIVA,HLAGRITX:
                                   HLAGRCSY,HLAGRCVE,HLAGRCCO,HLAGRCDI,HLAGRCUS:
                                   HLAGRPST,HLAGRREN,HLAGSPAR                   
          RETURN
.
DEHLFAG1  RESET     KEY78                                                       
          DELETE    HL7FAGA1,KEY78                                              
          RETURN
.
