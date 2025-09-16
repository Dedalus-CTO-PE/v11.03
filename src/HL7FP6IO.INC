.
. HL7FP6IO    
. --------
. Filename     : hl7fp6af.dat
.
RSHLFP61  RESET     KEY82                                                       
          READ      HL7FP6A1,KEY82;;                                            
          RETURN
.
RAHLFP61  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP6A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP61  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP6A1,KEY82;HLP6RSID,HLP6VRID,HLP6CNT1,HLP6CNT2,HLP6RTXT:
                                   HLP6RSYS,HLP6RVER,HLP6RCOD,HLP6RDSP,HLP6RUSE:
                                   HLP6RTX2,HLP6RSY2,HLP6RVE2,HLP6RCO2,HLP6RDS2:
                                   HLP6RUS2,HLP6NUSE,HLP6NTXT,HLP6NFAM,HLP6NGIV:
                                   HLP6NPRE,HLP6NSUF,HLP6NSTR,HLP6NEND,HLP6SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP61  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP6A1;HLP6RSID,HLP6VRID,HLP6CNT1,HLP6CNT2,HLP6RTXT:      
                             HLP6RSYS,HLP6RVER,HLP6RCOD,HLP6RDSP,HLP6RUSE:      
                             HLP6RTX2,HLP6RSY2,HLP6RVE2,HLP6RCO2,HLP6RDS2:      
                             HLP6RUS2,HLP6NUSE,HLP6NTXT,HLP6NFAM,HLP6NGIV:      
                             HLP6NPRE,HLP6NSUF,HLP6NSTR,HLP6NEND,HLP6SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP61  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP6A1;HLP6RSID,HLP6VRID,HLP6CNT1,HLP6CNT2,HLP6RTXT:      
                             HLP6RSYS,HLP6RVER,HLP6RCOD,HLP6RDSP,HLP6RUSE:      
                             HLP6RTX2,HLP6RSY2,HLP6RVE2,HLP6RCO2,HLP6RDS2:      
                             HLP6RUS2,HLP6NUSE,HLP6NTXT,HLP6NFAM,HLP6NGIV:      
                             HLP6NPRE,HLP6NSUF,HLP6NSTR,HLP6NEND,HLP6SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP61  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP6A1;HLP6RSID,HLP6VRID,HLP6CNT1,HLP6CNT2,HLP6RTXT:      
                             HLP6RSYS,HLP6RVER,HLP6RCOD,HLP6RDSP,HLP6RUSE:      
                             HLP6RTX2,HLP6RSY2,HLP6RVE2,HLP6RCO2,HLP6RDS2:      
                             HLP6RUS2,HLP6NUSE,HLP6NTXT,HLP6NFAM,HLP6NGIV:      
                             HLP6NPRE,HLP6NSUF,HLP6NSTR,HLP6NEND,HLP6SPAR       
          RETURN
.
WRHLFP61  RESET     KEY82                                                       
          WRITE     HL7FP6A1,KEY82;HLP6RSID,HLP6VRID,HLP6CNT1,HLP6CNT2,HLP6RTXT:
                                   HLP6RSYS,HLP6RVER,HLP6RCOD,HLP6RDSP,HLP6RUSE:
                                   HLP6RTX2,HLP6RSY2,HLP6RVE2,HLP6RCO2,HLP6RDS2:
                                   HLP6RUS2,HLP6NUSE,HLP6NTXT,HLP6NFAM,HLP6NGIV:
                                   HLP6NPRE,HLP6NSUF,HLP6NSTR,HLP6NEND,HLP6SPAR 
          RETURN
.
DEHLFP61  RESET     KEY82                                                       
          DELETE    HL7FP6A1,KEY82                                              
          RETURN
.
