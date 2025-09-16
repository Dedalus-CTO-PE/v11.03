.
. HL7FP4IO    
. --------
. Filename     : hl7fp4af.dat
.
RSHLFP41  RESET     KEY82                                                       
          READ      HL7FP4A1,KEY82;;                                            
          RETURN
.
RAHLFP41  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP4A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP41  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP4A1,KEY82;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:
                                   HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:
                                   HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:
                                   HLP4PSTA,HLP4PEND,HLP4SPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP41  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP4A1;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP41  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP4A1;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP41  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP4A1;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          RETURN
.
WRHLFP41  RESET     KEY82                                                       
          WRITE     HL7FP4A1,KEY82;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:
                                   HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:
                                   HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:
                                   HLP4PSTA,HLP4PEND,HLP4SPAR                   
          RETURN
.
DEHLFP41  RESET     KEY82                                                       
          DELETE    HL7FP4A1,KEY82                                              
          RETURN
.
RSHLFP42  RESET     KEY102                                                      
          READ      HL7FP4A2,KEY102;;                                           
          RETURN
.
RAHLFP42  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP4A2,KEY102;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP42  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP4A2,KEY102;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2:        
                                    HLP4REFE,HLP4TYPE,HLP4IDUS,HLP4IDSY:        
                                    HLP4IDVE,HLP4IDCD,HLP4IDDI,HLP4IDSL:        
                                    HLP4IDTX,HLP4SYST,HLP4IDVA,HLP4PSTA:        
                                    HLP4PEND,HLP4SPAR                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP42  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP4A2;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP42  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP4A2;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP42  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP4A2;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2,HLP4REFE:      
                             HLP4TYPE,HLP4IDUS,HLP4IDSY,HLP4IDVE,HLP4IDCD:      
                             HLP4IDDI,HLP4IDSL,HLP4IDTX,HLP4SYST,HLP4IDVA:      
                             HLP4PSTA,HLP4PEND,HLP4SPAR                         
          RETURN
.
WRHLFP42  RESET     KEY102                                                      
          WRITE     HL7FP4A2,KEY102;HLP4RSID,HLP4VRID,HLP4CNT1,HLP4CNT2:        
                                    HLP4REFE,HLP4TYPE,HLP4IDUS,HLP4IDSY:        
                                    HLP4IDVE,HLP4IDCD,HLP4IDDI,HLP4IDSL:        
                                    HLP4IDTX,HLP4SYST,HLP4IDVA,HLP4PSTA:        
                                    HLP4PEND,HLP4SPAR                           
          RETURN
.
DEHLFP42  RESET     KEY102                                                      
          DELETE    HL7FP4A2,KEY102                                             
          RETURN
.
