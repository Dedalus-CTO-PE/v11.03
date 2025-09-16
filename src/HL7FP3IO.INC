.
. HL7FP3IO    
. --------
. Filename     : hl7fp3af.dat
.
RSHLFP31  RESET     KEY82                                                       
          READ      HL7FP3A1,KEY82;;                                            
          RETURN
.
RAHLFP31  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP3A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP31  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP3A1,KEY82;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:
                                   HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:
                                   HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:
                                   HLP3PSTA,HLP3PEND,HLP3SPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP31  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP3A1;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP31  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP3A1;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP31  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP3A1;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          RETURN
.
WRHLFP31  RESET     KEY82                                                       
          WRITE     HL7FP3A1,KEY82;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:
                                   HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:
                                   HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:
                                   HLP3PSTA,HLP3PEND,HLP3SPAR                   
          RETURN
.
DEHLFP31  RESET     KEY82                                                       
          DELETE    HL7FP3A1,KEY82                                              
          RETURN
.
RSHLFP32  RESET     KEY102                                                      
          READ      HL7FP3A2,KEY102;;                                           
          RETURN
.
RAHLFP32  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP3A2,KEY102;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP32  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP3A2,KEY102;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2:        
                                    HLP3REFE,HLP3TYPE,HLP3IDUS,HLP3IDSY:        
                                    HLP3IDVE,HLP3IDCD,HLP3IDDI,HLP3IDSL:        
                                    HLP3IDTX,HLP3SYST,HLP3IDVA,HLP3PSTA:        
                                    HLP3PEND,HLP3SPAR                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP32  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP3A2;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP32  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP3A2;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP32  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP3A2;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2,HLP3REFE:      
                             HLP3TYPE,HLP3IDUS,HLP3IDSY,HLP3IDVE,HLP3IDCD:      
                             HLP3IDDI,HLP3IDSL,HLP3IDTX,HLP3SYST,HLP3IDVA:      
                             HLP3PSTA,HLP3PEND,HLP3SPAR                         
          RETURN
.
WRHLFP32  RESET     KEY102                                                      
          WRITE     HL7FP3A2,KEY102;HLP3RSID,HLP3VRID,HLP3CNT1,HLP3CNT2:        
                                    HLP3REFE,HLP3TYPE,HLP3IDUS,HLP3IDSY:        
                                    HLP3IDVE,HLP3IDCD,HLP3IDDI,HLP3IDSL:        
                                    HLP3IDTX,HLP3SYST,HLP3IDVA,HLP3PSTA:        
                                    HLP3PEND,HLP3SPAR                           
          RETURN
.
DEHLFP32  RESET     KEY102                                                      
          DELETE    HL7FP3A2,KEY102                                             
          RETURN
.
