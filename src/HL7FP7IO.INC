.
. HL7FP7IO    
. --------
. Filename     : hl7fp7af.dat
.
RSHLFP71  RESET     KEY82                                                       
          READ      HL7FP7A1,KEY82;;                                            
          RETURN
.
RAHLFP71  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP7A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP71  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP7A1,KEY82;HLP7RSID,HLP7VRID,HLP7CNT1,HLP7CNT2,HLP7NUSE:
                                   HLP7NTEX,HLP7NFAM,HLP7NGV1,HLP7NGV2,HLP7NGV3:
                                   HLP7NPR1,HLP7NPR2,HLP7NPR3,HLP7NSF1,HLP7NSF2:
                                   HLP7NSF3,HLP7PSTR,HLP7PEND,HLP7SPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP71  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP7A1;HLP7RSID,HLP7VRID,HLP7CNT1,HLP7CNT2,HLP7NUSE:      
                             HLP7NTEX,HLP7NFAM,HLP7NGV1,HLP7NGV2,HLP7NGV3:      
                             HLP7NPR1,HLP7NPR2,HLP7NPR3,HLP7NSF1,HLP7NSF2:      
                             HLP7NSF3,HLP7PSTR,HLP7PEND,HLP7SPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP71  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP7A1;HLP7RSID,HLP7VRID,HLP7CNT1,HLP7CNT2,HLP7NUSE:      
                             HLP7NTEX,HLP7NFAM,HLP7NGV1,HLP7NGV2,HLP7NGV3:      
                             HLP7NPR1,HLP7NPR2,HLP7NPR3,HLP7NSF1,HLP7NSF2:      
                             HLP7NSF3,HLP7PSTR,HLP7PEND,HLP7SPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP71  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP7A1;HLP7RSID,HLP7VRID,HLP7CNT1,HLP7CNT2,HLP7NUSE:      
                             HLP7NTEX,HLP7NFAM,HLP7NGV1,HLP7NGV2,HLP7NGV3:      
                             HLP7NPR1,HLP7NPR2,HLP7NPR3,HLP7NSF1,HLP7NSF2:      
                             HLP7NSF3,HLP7PSTR,HLP7PEND,HLP7SPAR                
          RETURN
.
WRHLFP71  RESET     KEY82                                                       
          WRITE     HL7FP7A1,KEY82;HLP7RSID,HLP7VRID,HLP7CNT1,HLP7CNT2,HLP7NUSE:
                                   HLP7NTEX,HLP7NFAM,HLP7NGV1,HLP7NGV2,HLP7NGV3:
                                   HLP7NPR1,HLP7NPR2,HLP7NPR3,HLP7NSF1,HLP7NSF2:
                                   HLP7NSF3,HLP7PSTR,HLP7PEND,HLP7SPAR          
          RETURN
.
DEHLFP71  RESET     KEY82                                                       
          DELETE    HL7FP7A1,KEY82                                              
          RETURN
.
