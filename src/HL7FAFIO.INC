.
. HL7FAFIO    
. --------
. Filename     : hl7fafaf.dat
.
RSHLAF1   RESET     KEY78                                                       
          READ      HL7FAFA1,KEY78;;                                            
          RETURN
.
RAHLAF1   RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAFA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLAF1   RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAFA1,KEY78;HLAFRSID,HLAFVRID,HLAFCNT1,HLAFRREF,HLAFRTYP:
                                   HLAFRDIS,HLAFRIDU,HLAFRSYS,HLAFRIVL,HLAFRIDS:
                                   HLAFRIDV,HLAFRIDC,HLAFRIDD,HLAFRIUS,HLAFRIDT:
                                   HLAFRIPS,HLAFRIPE,HLAFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLAF1   MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAFA1;HLAFRSID,HLAFVRID,HLAFCNT1,HLAFRREF,HLAFRTYP:      
                             HLAFRDIS,HLAFRIDU,HLAFRSYS,HLAFRIVL,HLAFRIDS:      
                             HLAFRIDV,HLAFRIDC,HLAFRIDD,HLAFRIUS,HLAFRIDT:      
                             HLAFRIPS,HLAFRIPE,HLAFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLAF1   MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAFA1;HLAFRSID,HLAFVRID,HLAFCNT1,HLAFRREF,HLAFRTYP:      
                             HLAFRDIS,HLAFRIDU,HLAFRSYS,HLAFRIVL,HLAFRIDS:      
                             HLAFRIDV,HLAFRIDC,HLAFRIDD,HLAFRIUS,HLAFRIDT:      
                             HLAFRIPS,HLAFRIPE,HLAFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLAF1   MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAFA1;HLAFRSID,HLAFVRID,HLAFCNT1,HLAFRREF,HLAFRTYP:      
                             HLAFRDIS,HLAFRIDU,HLAFRSYS,HLAFRIVL,HLAFRIDS:      
                             HLAFRIDV,HLAFRIDC,HLAFRIDD,HLAFRIUS,HLAFRIDT:      
                             HLAFRIPS,HLAFRIPE,HLAFSPAR                         
          RETURN
.
WRHLAF1   RESET     KEY78                                                       
          WRITE     HL7FAFA1,KEY78;HLAFRSID,HLAFVRID,HLAFCNT1,HLAFRREF,HLAFRTYP:
                                   HLAFRDIS,HLAFRIDU,HLAFRSYS,HLAFRIVL,HLAFRIDS:
                                   HLAFRIDV,HLAFRIDC,HLAFRIDD,HLAFRIUS,HLAFRIDT:
                                   HLAFRIPS,HLAFRIPE,HLAFSPAR                   
          RETURN
.
DEHLAF1   RESET     KEY78                                                       
          DELETE    HL7FAFA1,KEY78                                              
          RETURN
.
