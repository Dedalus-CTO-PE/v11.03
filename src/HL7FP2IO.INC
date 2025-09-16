.
. HL7FP2IO    
. --------
. Filename     : hl7fp2af.dat
.
RSHLFP21  RESET     KEY82                                                       
          READ      HL7FP2A1,KEY82;;                                            
          RETURN
.
RAHLFP21  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP2A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP21  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP2A1,KEY82;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:
                                   HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:
                                   HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:
                                   HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:
                                   HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:
                                   HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP21  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP2A1;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP21  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP2A1;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP21  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP2A1;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          RETURN
.
WRHLFP21  RESET     KEY82                                                       
          WRITE     HL7FP2A1,KEY82;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:
                                   HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:
                                   HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:
                                   HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:
                                   HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:
                                   HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR 
          RETURN
.
DEHLFP21  RESET     KEY82                                                       
          DELETE    HL7FP2A1,KEY82                                              
          RETURN
.
RSHLFP22  RESET     KEY102                                                      
          READ      HL7FP2A2,KEY102;;                                           
          RETURN
.
RAHLFP22  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP2A2,KEY102;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP22  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FP2A2,KEY102;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2:        
                                    HLP2IDUS,HLP2IDSY,HLP2IDVE,HLP2IDCD:        
                                    HLP2IDDI,HLP2IDSL,HLP2IDTX,HLP2SYST:        
                                    HLP2IDVA,HLP2PSTA,HLP2PEND,HLP2AREF:        
                                    HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:        
                                    HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER:        
                                    HLP2CCOD,HLP2CDIS,HLP2CUSS,HLP2PSTR:        
                                    HLP2PREN,HLP2SPAR                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP22  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP2A2;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP22  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP2A2;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP22  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP2A2;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2,HLP2IDUS:      
                             HLP2IDSY,HLP2IDVE,HLP2IDCD,HLP2IDDI,HLP2IDSL:      
                             HLP2IDTX,HLP2SYST,HLP2IDVA,HLP2PSTA,HLP2PEND:      
                             HLP2AREF,HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:      
                             HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER,HLP2CCOD:      
                             HLP2CDIS,HLP2CUSS,HLP2PSTR,HLP2PREN,HLP2SPAR       
          RETURN
.
WRHLFP22  RESET     KEY102                                                      
          WRITE     HL7FP2A2,KEY102;HLP2RSID,HLP2VRID,HLP2CNT1,HLP2CNT2:        
                                    HLP2IDUS,HLP2IDSY,HLP2IDVE,HLP2IDCD:        
                                    HLP2IDDI,HLP2IDSL,HLP2IDTX,HLP2SYST:        
                                    HLP2IDVA,HLP2PSTA,HLP2PEND,HLP2AREF:        
                                    HLP2ATYP,HLP2ADIS,HLP2IUSE,HLP2ISYS:        
                                    HLP2IVAL,HLP2ITXT,HLP2CSYS,HLP2CVER:        
                                    HLP2CCOD,HLP2CDIS,HLP2CUSS,HLP2PSTR:        
                                    HLP2PREN,HLP2SPAR                           
          RETURN
.
DEHLFP22  RESET     KEY102                                                      
          DELETE    HL7FP2A2,KEY102                                             
          RETURN
.
