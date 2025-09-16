.
. HL7FABIO    
. --------
. Filename     : hl7fabaf.dat
.
RSHLFAB1  RESET     KEY78                                                       
          READ      HL7FABA1,KEY78;;                                            
          RETURN
.
RAHLFAB1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FABA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAB1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FABA1,KEY78;HLABRSID,HLABVRID,HLABCNT1,HLABPREF,HLABPTYP:
                                   HLABPDIS,HLABPIDU,HLABPSYS,HLABPIVL,HLABPIDS:
                                   HLABPIDV,HLABPIDC,HLABPIDD,HLABPIUS,HLABPIDT:
                                   HLABPIPS,HLABPIPE,HLABSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAB1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FABA1;HLABRSID,HLABVRID,HLABCNT1,HLABPREF,HLABPTYP:      
                             HLABPDIS,HLABPIDU,HLABPSYS,HLABPIVL,HLABPIDS:      
                             HLABPIDV,HLABPIDC,HLABPIDD,HLABPIUS,HLABPIDT:      
                             HLABPIPS,HLABPIPE,HLABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAB1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FABA1;HLABRSID,HLABVRID,HLABCNT1,HLABPREF,HLABPTYP:      
                             HLABPDIS,HLABPIDU,HLABPSYS,HLABPIVL,HLABPIDS:      
                             HLABPIDV,HLABPIDC,HLABPIDD,HLABPIUS,HLABPIDT:      
                             HLABPIPS,HLABPIPE,HLABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FABA1;HLABRSID,HLABVRID,HLABCNT1,HLABPREF,HLABPTYP:      
                             HLABPDIS,HLABPIDU,HLABPSYS,HLABPIVL,HLABPIDS:      
                             HLABPIDV,HLABPIDC,HLABPIDD,HLABPIUS,HLABPIDT:      
                             HLABPIPS,HLABPIPE,HLABSPAR                         
          RETURN
.
WRHLFAB1  RESET     KEY78                                                       
          WRITE     HL7FABA1,KEY78;HLABRSID,HLABVRID,HLABCNT1,HLABPREF,HLABPTYP:
                                   HLABPDIS,HLABPIDU,HLABPSYS,HLABPIVL,HLABPIDS:
                                   HLABPIDV,HLABPIDC,HLABPIDD,HLABPIUS,HLABPIDT:
                                   HLABPIPS,HLABPIPE,HLABSPAR                   
          RETURN
.
DEHLFAB1  RESET     KEY78                                                       
          DELETE    HL7FABA1,KEY78                                              
          RETURN
.
