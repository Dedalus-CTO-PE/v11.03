.
. HL7FP9IO    
. --------
. Filename     : hl7fp9af.dat
.
RSHLFP91  RESET     KEY82                                                       
          READ      HL7FP9A1,KEY82;;                                            
          RETURN
.
RAHLFP91  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP9A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP91  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP9A1,KEY82;HLP9RSID,HLP9VRID,HLP9CNT1,HLP9CNT2,HLP9AUSE:
                                   HLP9ATYP,HLP9ATXT,HLP9ALN1,HLP9ALN2,HLP9ALN3:
                                   HLP9ALN4,HLP9ALN5,HLP9ACTY,HLP9ADST,HLP9ASTA:
                                   HLP9APOC,HLP9ACOU,HLP9ASTR,HLP9AEND,HLP9SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP91  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP9A1;HLP9RSID,HLP9VRID,HLP9CNT1,HLP9CNT2,HLP9AUSE:      
                             HLP9ATYP,HLP9ATXT,HLP9ALN1,HLP9ALN2,HLP9ALN3:      
                             HLP9ALN4,HLP9ALN5,HLP9ACTY,HLP9ADST,HLP9ASTA:      
                             HLP9APOC,HLP9ACOU,HLP9ASTR,HLP9AEND,HLP9SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP91  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP9A1;HLP9RSID,HLP9VRID,HLP9CNT1,HLP9CNT2,HLP9AUSE:      
                             HLP9ATYP,HLP9ATXT,HLP9ALN1,HLP9ALN2,HLP9ALN3:      
                             HLP9ALN4,HLP9ALN5,HLP9ACTY,HLP9ADST,HLP9ASTA:      
                             HLP9APOC,HLP9ACOU,HLP9ASTR,HLP9AEND,HLP9SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP91  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP9A1;HLP9RSID,HLP9VRID,HLP9CNT1,HLP9CNT2,HLP9AUSE:      
                             HLP9ATYP,HLP9ATXT,HLP9ALN1,HLP9ALN2,HLP9ALN3:      
                             HLP9ALN4,HLP9ALN5,HLP9ACTY,HLP9ADST,HLP9ASTA:      
                             HLP9APOC,HLP9ACOU,HLP9ASTR,HLP9AEND,HLP9SPAR       
          RETURN
.
WRHLFP91  RESET     KEY82                                                       
          WRITE     HL7FP9A1,KEY82;HLP9RSID,HLP9VRID,HLP9CNT1,HLP9CNT2,HLP9AUSE:
                                   HLP9ATYP,HLP9ATXT,HLP9ALN1,HLP9ALN2,HLP9ALN3:
                                   HLP9ALN4,HLP9ALN5,HLP9ACTY,HLP9ADST,HLP9ASTA:
                                   HLP9APOC,HLP9ACOU,HLP9ASTR,HLP9AEND,HLP9SPAR 
          RETURN
.
DEHLFP91  RESET     KEY82                                                       
          DELETE    HL7FP9A1,KEY82                                              
          RETURN
.
