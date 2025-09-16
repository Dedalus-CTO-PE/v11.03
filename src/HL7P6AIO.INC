.
. HL7P6AIO    
. --------
. Filename     : hl7p6aaf.dat
.
RSHLP6A1  RESET     KEY82                                                       
          READ      HL7P6AA1,KEY82;;                                            
          RETURN
.
RAHLP6A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P6AA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP6A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P6AA1,KEY82;HL6ARSID,HL6AVRID,HL6ACNT1,HL6ACNT2,HL6ATSYS:
                                   HL6ATVAL,HL6ATUSE,HL6ATRAN,HL6ATSTR,HL6ATEND:
                                   HL6ATSY2,HL6ATVA2,HL6ATUS2,HL6ATRA2,HL6ATST2:
                                   HL6ATEN2,HL6ATSY3,HL6ATVA3,HL6ATUS3,HL6ATRA3:
                                   HL6ATST3,HL6ATEN3,HL6AAUSE,HL6AATYP,HL6AATXT:
                                   HL6AALN1,HL6AALN2,HL6AALN3,HL6AALN4,HL6AAPOS:
                                   HL6AACNT,HL6AASTR,HL6AAEND,HL6ASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP6A1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P6AA1;HL6ARSID,HL6AVRID,HL6ACNT1,HL6ACNT2,HL6ATSYS:      
                             HL6ATVAL,HL6ATUSE,HL6ATRAN,HL6ATSTR,HL6ATEND:      
                             HL6ATSY2,HL6ATVA2,HL6ATUS2,HL6ATRA2,HL6ATST2:      
                             HL6ATEN2,HL6ATSY3,HL6ATVA3,HL6ATUS3,HL6ATRA3:      
                             HL6ATST3,HL6ATEN3,HL6AAUSE,HL6AATYP,HL6AATXT:      
                             HL6AALN1,HL6AALN2,HL6AALN3,HL6AALN4,HL6AAPOS:      
                             HL6AACNT,HL6AASTR,HL6AAEND,HL6ASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP6A1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P6AA1;HL6ARSID,HL6AVRID,HL6ACNT1,HL6ACNT2,HL6ATSYS:      
                             HL6ATVAL,HL6ATUSE,HL6ATRAN,HL6ATSTR,HL6ATEND:      
                             HL6ATSY2,HL6ATVA2,HL6ATUS2,HL6ATRA2,HL6ATST2:      
                             HL6ATEN2,HL6ATSY3,HL6ATVA3,HL6ATUS3,HL6ATRA3:      
                             HL6ATST3,HL6ATEN3,HL6AAUSE,HL6AATYP,HL6AATXT:      
                             HL6AALN1,HL6AALN2,HL6AALN3,HL6AALN4,HL6AAPOS:      
                             HL6AACNT,HL6AASTR,HL6AAEND,HL6ASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP6A1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P6AA1;HL6ARSID,HL6AVRID,HL6ACNT1,HL6ACNT2,HL6ATSYS:      
                             HL6ATVAL,HL6ATUSE,HL6ATRAN,HL6ATSTR,HL6ATEND:      
                             HL6ATSY2,HL6ATVA2,HL6ATUS2,HL6ATRA2,HL6ATST2:      
                             HL6ATEN2,HL6ATSY3,HL6ATVA3,HL6ATUS3,HL6ATRA3:      
                             HL6ATST3,HL6ATEN3,HL6AAUSE,HL6AATYP,HL6AATXT:      
                             HL6AALN1,HL6AALN2,HL6AALN3,HL6AALN4,HL6AAPOS:      
                             HL6AACNT,HL6AASTR,HL6AAEND,HL6ASPAR                
          RETURN
.
WRHLP6A1  RESET     KEY82                                                       
          WRITE     HL7P6AA1,KEY82;HL6ARSID,HL6AVRID,HL6ACNT1,HL6ACNT2,HL6ATSYS:
                                   HL6ATVAL,HL6ATUSE,HL6ATRAN,HL6ATSTR,HL6ATEND:
                                   HL6ATSY2,HL6ATVA2,HL6ATUS2,HL6ATRA2,HL6ATST2:
                                   HL6ATEN2,HL6ATSY3,HL6ATVA3,HL6ATUS3,HL6ATRA3:
                                   HL6ATST3,HL6ATEN3,HL6AAUSE,HL6AATYP,HL6AATXT:
                                   HL6AALN1,HL6AALN2,HL6AALN3,HL6AALN4,HL6AAPOS:
                                   HL6AACNT,HL6AASTR,HL6AAEND,HL6ASPAR          
          RETURN
.
DEHLP6A1  RESET     KEY82                                                       
          DELETE    HL7P6AA1,KEY82                                              
          RETURN
.
