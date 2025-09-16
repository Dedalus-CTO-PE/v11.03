.
. HL7FP5IO    
. --------
. Filename     : hl7fp5af.dat
.
RSHLFP51  RESET     KEY82                                                       
          READ      HL7FP5A1,KEY82;;                                            
          RETURN
.
RAHLFP51  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP5A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFP51  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FP5A1,KEY82;HLP5RSID,HLP5VRID,HLP5CNT1,HLP5CNT2,HLP5EURL:
                                   HLP5VALU,HLP5TEXT,HLP5SYST,HLP5VERS,HLP5CODE:
                                   HLP5DISP,HLP5USER,HLP5SDTT,HLP5EDTT,HLP5AUSE:
                                   HLP5ATYP,HLP5ATXT,HLP5ALN1,HLP5ALN2,HLP5ALN3:
                                   HLP5ALN4,HLP5APOS,HLP5ACOU,HLP5ASTR,HLP5AEND:
                                   HLP5DURL,HLP5DSYS,HLP5DVER,HLP5DCOD,HLP5DDIS:
                                   HLP5DUSE,HLP5EXID,HLP5SPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFP51  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FP5A1;HLP5RSID,HLP5VRID,HLP5CNT1,HLP5CNT2,HLP5EURL:      
                             HLP5VALU,HLP5TEXT,HLP5SYST,HLP5VERS,HLP5CODE:      
                             HLP5DISP,HLP5USER,HLP5SDTT,HLP5EDTT,HLP5AUSE:      
                             HLP5ATYP,HLP5ATXT,HLP5ALN1,HLP5ALN2,HLP5ALN3:      
                             HLP5ALN4,HLP5APOS,HLP5ACOU,HLP5ASTR,HLP5AEND:      
                             HLP5DURL,HLP5DSYS,HLP5DVER,HLP5DCOD,HLP5DDIS:      
                             HLP5DUSE,HLP5EXID,HLP5SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFP51  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FP5A1;HLP5RSID,HLP5VRID,HLP5CNT1,HLP5CNT2,HLP5EURL:      
                             HLP5VALU,HLP5TEXT,HLP5SYST,HLP5VERS,HLP5CODE:      
                             HLP5DISP,HLP5USER,HLP5SDTT,HLP5EDTT,HLP5AUSE:      
                             HLP5ATYP,HLP5ATXT,HLP5ALN1,HLP5ALN2,HLP5ALN3:      
                             HLP5ALN4,HLP5APOS,HLP5ACOU,HLP5ASTR,HLP5AEND:      
                             HLP5DURL,HLP5DSYS,HLP5DVER,HLP5DCOD,HLP5DDIS:      
                             HLP5DUSE,HLP5EXID,HLP5SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFP51  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FP5A1;HLP5RSID,HLP5VRID,HLP5CNT1,HLP5CNT2,HLP5EURL:      
                             HLP5VALU,HLP5TEXT,HLP5SYST,HLP5VERS,HLP5CODE:      
                             HLP5DISP,HLP5USER,HLP5SDTT,HLP5EDTT,HLP5AUSE:      
                             HLP5ATYP,HLP5ATXT,HLP5ALN1,HLP5ALN2,HLP5ALN3:      
                             HLP5ALN4,HLP5APOS,HLP5ACOU,HLP5ASTR,HLP5AEND:      
                             HLP5DURL,HLP5DSYS,HLP5DVER,HLP5DCOD,HLP5DDIS:      
                             HLP5DUSE,HLP5EXID,HLP5SPAR                         
          RETURN
.
WRHLFP51  RESET     KEY82                                                       
          WRITE     HL7FP5A1,KEY82;HLP5RSID,HLP5VRID,HLP5CNT1,HLP5CNT2,HLP5EURL:
                                   HLP5VALU,HLP5TEXT,HLP5SYST,HLP5VERS,HLP5CODE:
                                   HLP5DISP,HLP5USER,HLP5SDTT,HLP5EDTT,HLP5AUSE:
                                   HLP5ATYP,HLP5ATXT,HLP5ALN1,HLP5ALN2,HLP5ALN3:
                                   HLP5ALN4,HLP5APOS,HLP5ACOU,HLP5ASTR,HLP5AEND:
                                   HLP5DURL,HLP5DSYS,HLP5DVER,HLP5DCOD,HLP5DDIS:
                                   HLP5DUSE,HLP5EXID,HLP5SPAR                   
          RETURN
.
DEHLFP51  RESET     KEY82                                                       
          DELETE    HL7FP5A1,KEY82                                              
          RETURN
.
