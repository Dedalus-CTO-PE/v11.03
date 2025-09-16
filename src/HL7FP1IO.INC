.
. HL7FP1IO    
. --------
. Filename     : hl7fp1af.dat
.
RSHLFP11  RESET     KEY78                                                       
          READ      HL7FP1A1,KEY78;;                                            
          RETURN
.
RAHLFP11  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP11  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A1,KEY78;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP11  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP1A1;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP11  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP1A1;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP11  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP1A1;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          RETURN
.
WRHLFP11  RESET     KEY78                                                       
          WRITE     HL7FP1A1,KEY78;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          RETURN
.
DEHLFP11  RESET     KEY78                                                       
          DELETE    HL7FP1A1,KEY78                                              
          RETURN
.
RSHLFP12  RESET     KEY86                                                       
          READ      HL7FP1A2,KEY86;;                                            
          RETURN
.
RAHLFP12  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A2,KEY86;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP12  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A2,KEY86;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP12  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP1A2;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP12  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP1A2;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP12  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP1A2;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          RETURN
.
WRHLFP12  RESET     KEY86                                                       
          WRITE     HL7FP1A2,KEY86;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          RETURN
.
DEHLFP12  RESET     KEY86                                                       
          DELETE    HL7FP1A2,KEY86                                              
          RETURN
.
RSHLFP13  RESET     KEY108                                                      
          READ      HL7FP1A3,KEY108;;                                           
          RETURN
.
RAHLFP13  RESET     KEY108                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP1A3,KEY108;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP13  RESET     KEY108                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP1A3,KEY108;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID:        
                                    HLP1VRID,HLP1CNT1,HLP1IMRL,HLP1LANG:        
                                    HLP1LSUP,HLP1SRCE,HLP1PRF1,HLP1PRF2:        
                                    HLP1SSYS,HLP1SVER,HLP1SCOD,HLP1SDIS:        
                                    HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:        
                                    HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT:        
                                    HLP1CRTM,HLP1CRUI,HLP1UPDT,HLP1UPTM:        
                                    HLP1UPUI,HLP1SPAR                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP13  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP1A3;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP13  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP1A3;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP13  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP1A3;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          RETURN
.
WRHLFP13  RESET     KEY108                                                      
          WRITE     HL7FP1A3,KEY108;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID:        
                                    HLP1VRID,HLP1CNT1,HLP1IMRL,HLP1LANG:        
                                    HLP1LSUP,HLP1SRCE,HLP1PRF1,HLP1PRF2:        
                                    HLP1SSYS,HLP1SVER,HLP1SCOD,HLP1SDIS:        
                                    HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:        
                                    HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT:        
                                    HLP1CRTM,HLP1CRUI,HLP1UPDT,HLP1UPTM:        
                                    HLP1UPUI,HLP1SPAR                           
          RETURN
.
DEHLFP13  RESET     KEY108                                                      
          DELETE    HL7FP1A3,KEY108                                             
          RETURN
.
RSHLFP14  RESET     KEY79                                                       
          READ      HL7FP1A4,KEY79;;                                            
          RETURN
.
RAHLFP14  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A4,KEY79;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP14  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP1A4,KEY79;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP14  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP1A4;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP14  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP1A4;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP14  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP1A4;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:      
                             HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:      
                             HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:      
                             HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:      
                             HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:      
                             HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR       
          RETURN
.
WRHLFP14  RESET     KEY79                                                       
          WRITE     HL7FP1A4,KEY79;HLP1STAT,HLP1URNO,HLP1RTYP,HLP1RSID,HLP1VRID:
                                   HLP1CNT1,HLP1IMRL,HLP1LANG,HLP1LSUP,HLP1SRCE:
                                   HLP1PRF1,HLP1PRF2,HLP1SSYS,HLP1SVER,HLP1SCOD:
                                   HLP1SDIS,HLP1SUSL,HLP1SSY2,HLP1SVE2,HLP1SCO2:
                                   HLP1SDI2,HLP1SUS2,HLP1PRDS,HLP1CRDT,HLP1CRTM:
                                   HLP1CRUI,HLP1UPDT,HLP1UPTM,HLP1UPUI,HLP1SPAR 
          RETURN
.
DEHLFP14  RESET     KEY79                                                       
          DELETE    HL7FP1A4,KEY79                                              
          RETURN
.
