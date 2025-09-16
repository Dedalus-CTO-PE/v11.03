.
. HL7TABIO    
. --------
. Filename     : hl7tabaf.dat
.
RSHLTA1   RESET     KEY4                                                        
          READ      HL7TABA1,KEY4;;                                             
          RETURN
.
RAHLTA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      HL7TABA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLTA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      HL7TABA1,KEY4;HLTATID,HLTADES,HLTASPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLTA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    HL7TABA1;HLTATID,HLTADES,HLTASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLTA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    HL7TABA1;HLTATID,HLTADES,HLTASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLTA1                                                                         
          UPDATE    HL7TABA1;HLTATID,HLTADES,HLTASPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRHLTA1   RESET     KEY4                                                        
          WRITE     HL7TABA1,KEY4;HLTATID,HLTADES,HLTASPA                       
          RETURN
.
DEHLTA1   RESET     KEY4                                                        
          DELETE    HL7TABA1,KEY4                                               
          RETURN
.
RLHLTA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     HL7TABA1,KEY4;HLTATID,HLTADES,HLTASPA                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLHLTA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   HL7TABA1;HLTATID,HLTADES,HLTASPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLHLTA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   HL7TABA1;HLTATID,HLTADES,HLTASPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUHLTA1   RESET     KEY4                                                        
          UNLOCK    HL7TABA1                                                    
          RETURN
.
