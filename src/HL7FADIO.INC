.
. HL7FADIO    
. --------
. Filename     : hl7fadaf.dat
.
RSHLFAD1  RESET     KEY78                                                       
          READ      HL7FADA1,KEY78;;                                            
          RETURN
.
RAHLFAD1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FADA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAD1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FADA1,KEY78;HLADRSID,HLADVRID,HLADCNT1,HLADEREF,HLADETYP:
                                   HLADEDIS,HLADEIDU,HLADESYS,HLADEIVL,HLADEIDS:
                                   HLADEIDV,HLADEIDC,HLADEIDD,HLADEIDL,HLADEIDT:
                                   HLADEIPS,HLADEIPE,HLADSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAD1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FADA1;HLADRSID,HLADVRID,HLADCNT1,HLADEREF,HLADETYP:      
                             HLADEDIS,HLADEIDU,HLADESYS,HLADEIVL,HLADEIDS:      
                             HLADEIDV,HLADEIDC,HLADEIDD,HLADEIDL,HLADEIDT:      
                             HLADEIPS,HLADEIPE,HLADSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAD1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FADA1;HLADRSID,HLADVRID,HLADCNT1,HLADEREF,HLADETYP:      
                             HLADEDIS,HLADEIDU,HLADESYS,HLADEIVL,HLADEIDS:      
                             HLADEIDV,HLADEIDC,HLADEIDD,HLADEIDL,HLADEIDT:      
                             HLADEIPS,HLADEIPE,HLADSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FADA1;HLADRSID,HLADVRID,HLADCNT1,HLADEREF,HLADETYP:      
                             HLADEDIS,HLADEIDU,HLADESYS,HLADEIVL,HLADEIDS:      
                             HLADEIDV,HLADEIDC,HLADEIDD,HLADEIDL,HLADEIDT:      
                             HLADEIPS,HLADEIPE,HLADSPAR                         
          RETURN
.
WRHLFAD1  RESET     KEY78                                                       
          WRITE     HL7FADA1,KEY78;HLADRSID,HLADVRID,HLADCNT1,HLADEREF,HLADETYP:
                                   HLADEDIS,HLADEIDU,HLADESYS,HLADEIVL,HLADEIDS:
                                   HLADEIDV,HLADEIDC,HLADEIDD,HLADEIDL,HLADEIDT:
                                   HLADEIPS,HLADEIPE,HLADSPAR                   
          RETURN
.
DEHLFAD1  RESET     KEY78                                                       
          DELETE    HL7FADA1,KEY78                                              
          RETURN
.
