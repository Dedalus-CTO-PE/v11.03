.
. HL7P3AIO    
. --------
. Filename     : hl7p3aaf.dat
.
RSHLP3A1  RESET     KEY82                                                       
          READ      HL7P3AA1,KEY82;;                                            
          RETURN
.
RAHLP3A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P3AA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP3A1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P3AA1,KEY82;HL3ARSID,HL3AVRID,HL3ACNT1,HL3ACNT2,HL3AAREF:
                                   HL3AATYP,HL3AADIS,HL3AIUSE,HL3AISYS,HL3AIVAL:
                                   HL3AITXT,HL3ACSYS,HL3ACVER,HL3ACCOD,HL3ACDIS:
                                   HL3ACUSS,HL3APSTR,HL3APEND,HL3ADISP,HL3ASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP3A1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P3AA1;HL3ARSID,HL3AVRID,HL3ACNT1,HL3ACNT2,HL3AAREF:      
                             HL3AATYP,HL3AADIS,HL3AIUSE,HL3AISYS,HL3AIVAL:      
                             HL3AITXT,HL3ACSYS,HL3ACVER,HL3ACCOD,HL3ACDIS:      
                             HL3ACUSS,HL3APSTR,HL3APEND,HL3ADISP,HL3ASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP3A1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P3AA1;HL3ARSID,HL3AVRID,HL3ACNT1,HL3ACNT2,HL3AAREF:      
                             HL3AATYP,HL3AADIS,HL3AIUSE,HL3AISYS,HL3AIVAL:      
                             HL3AITXT,HL3ACSYS,HL3ACVER,HL3ACCOD,HL3ACDIS:      
                             HL3ACUSS,HL3APSTR,HL3APEND,HL3ADISP,HL3ASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP3A1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P3AA1;HL3ARSID,HL3AVRID,HL3ACNT1,HL3ACNT2,HL3AAREF:      
                             HL3AATYP,HL3AADIS,HL3AIUSE,HL3AISYS,HL3AIVAL:      
                             HL3AITXT,HL3ACSYS,HL3ACVER,HL3ACCOD,HL3ACDIS:      
                             HL3ACUSS,HL3APSTR,HL3APEND,HL3ADISP,HL3ASPAR       
          RETURN
.
WRHLP3A1  RESET     KEY82                                                       
          WRITE     HL7P3AA1,KEY82;HL3ARSID,HL3AVRID,HL3ACNT1,HL3ACNT2,HL3AAREF:
                                   HL3AATYP,HL3AADIS,HL3AIUSE,HL3AISYS,HL3AIVAL:
                                   HL3AITXT,HL3ACSYS,HL3ACVER,HL3ACCOD,HL3ACDIS:
                                   HL3ACUSS,HL3APSTR,HL3APEND,HL3ADISP,HL3ASPAR 
          RETURN
.
DEHLP3A1  RESET     KEY82                                                       
          DELETE    HL7P3AA1,KEY82                                              
          RETURN
.
