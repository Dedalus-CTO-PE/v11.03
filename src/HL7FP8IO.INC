.
. HL7FP8IO    
. --------
. Filename     : hl7fp8af.dat
.
RSHLFP81  RESET     KEY82                                                       
          READ      HL7FP8A1,KEY82;;                                            
          RETURN
.
RAHLFP81  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP8A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP81  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP8A1,KEY82;HLP8RSID,HLP8VRID,HLP8CNT1,HLP8CNT2,HLP8TSYS:
                                   HLP8TVAL,HLP8TUSE,HLP8TRNK,HLP8TSTR,HLP8TEND:
                                   HLP8SPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP81  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP8A1;HLP8RSID,HLP8VRID,HLP8CNT1,HLP8CNT2,HLP8TSYS:      
                             HLP8TVAL,HLP8TUSE,HLP8TRNK,HLP8TSTR,HLP8TEND:      
                             HLP8SPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP81  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP8A1;HLP8RSID,HLP8VRID,HLP8CNT1,HLP8CNT2,HLP8TSYS:      
                             HLP8TVAL,HLP8TUSE,HLP8TRNK,HLP8TSTR,HLP8TEND:      
                             HLP8SPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP81  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP8A1;HLP8RSID,HLP8VRID,HLP8CNT1,HLP8CNT2,HLP8TSYS:      
                             HLP8TVAL,HLP8TUSE,HLP8TRNK,HLP8TSTR,HLP8TEND:      
                             HLP8SPAR                                           
          RETURN
.
WRHLFP81  RESET     KEY82                                                       
          WRITE     HL7FP8A1,KEY82;HLP8RSID,HLP8VRID,HLP8CNT1,HLP8CNT2,HLP8TSYS:
                                   HLP8TVAL,HLP8TUSE,HLP8TRNK,HLP8TSTR,HLP8TEND:
                                   HLP8SPAR                                     
          RETURN
.
DEHLFP81  RESET     KEY82                                                       
          DELETE    HL7FP8A1,KEY82                                              
          RETURN
.
