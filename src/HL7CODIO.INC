.
. HL7CODIO    
. --------
. Filename     : hl7codaf.dat
.
RSHLCO1   RESET     KEY14                                                       
          READ      HL7CODA1,KEY14;;                                            
          RETURN
.
RAHLCO1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      HL7CODA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLCO1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      HL7CODA1,KEY14;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:     
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLCO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    HL7CODA1;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:           
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLCO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    HL7CODA1;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:           
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLCO1                                                                         
          UPDATE    HL7CODA1;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:           
                        HLCOBGC,HLCOSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRHLCO1   RESET     KEY14                                                       
          WRITE     HL7CODA1,KEY14;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:     
                        HLCOBGC,HLCOSPA                                         
          RETURN
.
DEHLCO1   RESET     KEY14                                                       
          DELETE    HL7CODA1,KEY14                                              
          RETURN
.
RLHLCO1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     HL7CODA1,KEY14;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:     
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLHLCO1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   HL7CODA1;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:           
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLHLCO1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   HL7CODA1;HLCOTID,HLCOCOD,HLCODES,HLCOCAT,HLCOICD:           
                        HLCOBGC,HLCOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUHLCO1   RESET     KEY14                                                       
          UNLOCK    HL7CODA1                                                    
          RETURN
.
