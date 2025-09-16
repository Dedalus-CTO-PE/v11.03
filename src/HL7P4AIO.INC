.
. HL7P4AIO    
. --------
. Filename     : hl7p4aaf.dat
.
RSHLP4A1  RESET     KEY82                                                       
          READ      HL7P4AA1,KEY82;;                                            
          RETURN
.
RAHLP4A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P4AA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP4A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P4AA1,KEY82;HL4ARSID,HL4AVRID,HL4ACNT1,HL4ACNT2,HL4AAREF:
                                   HL4AATYP,HL4AADIS,HL4AIUSE,HL4AISYS,HL4AIVAL:
                                   HL4AITXT,HL4ACSYS,HL4ACVER,HL4ACCOD,HL4ACDIS:
                                   HL4ACUSS,HL4APSTR,HL4APREN,HL4ADISP,HL4ALNTY:
                                   HL4ASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP4A1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P4AA1;HL4ARSID,HL4AVRID,HL4ACNT1,HL4ACNT2,HL4AAREF:      
                             HL4AATYP,HL4AADIS,HL4AIUSE,HL4AISYS,HL4AIVAL:      
                             HL4AITXT,HL4ACSYS,HL4ACVER,HL4ACCOD,HL4ACDIS:      
                             HL4ACUSS,HL4APSTR,HL4APREN,HL4ADISP,HL4ALNTY:      
                             HL4ASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP4A1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P4AA1;HL4ARSID,HL4AVRID,HL4ACNT1,HL4ACNT2,HL4AAREF:      
                             HL4AATYP,HL4AADIS,HL4AIUSE,HL4AISYS,HL4AIVAL:      
                             HL4AITXT,HL4ACSYS,HL4ACVER,HL4ACCOD,HL4ACDIS:      
                             HL4ACUSS,HL4APSTR,HL4APREN,HL4ADISP,HL4ALNTY:      
                             HL4ASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP4A1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P4AA1;HL4ARSID,HL4AVRID,HL4ACNT1,HL4ACNT2,HL4AAREF:      
                             HL4AATYP,HL4AADIS,HL4AIUSE,HL4AISYS,HL4AIVAL:      
                             HL4AITXT,HL4ACSYS,HL4ACVER,HL4ACCOD,HL4ACDIS:      
                             HL4ACUSS,HL4APSTR,HL4APREN,HL4ADISP,HL4ALNTY:      
                             HL4ASPAR                                           
          RETURN
.
WRHLP4A1  RESET     KEY82                                                       
          WRITE     HL7P4AA1,KEY82;HL4ARSID,HL4AVRID,HL4ACNT1,HL4ACNT2,HL4AAREF:
                                   HL4AATYP,HL4AADIS,HL4AIUSE,HL4AISYS,HL4AIVAL:
                                   HL4AITXT,HL4ACSYS,HL4ACVER,HL4ACCOD,HL4ACDIS:
                                   HL4ACUSS,HL4APSTR,HL4APREN,HL4ADISP,HL4ALNTY:
                                   HL4ASPAR                                     
          RETURN
.
DEHLP4A1  RESET     KEY82                                                       
          DELETE    HL7P4AA1,KEY82                                              
          RETURN
.
