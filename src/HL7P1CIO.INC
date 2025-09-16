.
. HL7P1CIO    
. --------
. Filename     : hl7p1caf.dat
.
RSHLP1C1  RESET     KEY78                                                       
          READ      HL7P1CA1,KEY78;;                                            
          RETURN
.
RAHLP1C1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1CA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP1C1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1CA1,KEY78;HL1CRSID,HL1CVRID,HL1CCNT1,HL1CMAIR,HL1CMAIT:
                                   HL1CMAID,HL1CMAIU,HL1CMAIS,HL1CMAIV,HL1CMITX:
                                   HL1CMISY,HL1CMIVE,HL1CMICD,HL1CMIDI,HL1CMIUS:
                                   HL1CMIPS,HL1CMIPE,HL1CSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP1C1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P1CA1;HL1CRSID,HL1CVRID,HL1CCNT1,HL1CMAIR,HL1CMAIT:      
                             HL1CMAID,HL1CMAIU,HL1CMAIS,HL1CMAIV,HL1CMITX:      
                             HL1CMISY,HL1CMIVE,HL1CMICD,HL1CMIDI,HL1CMIUS:      
                             HL1CMIPS,HL1CMIPE,HL1CSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP1C1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P1CA1;HL1CRSID,HL1CVRID,HL1CCNT1,HL1CMAIR,HL1CMAIT:      
                             HL1CMAID,HL1CMAIU,HL1CMAIS,HL1CMAIV,HL1CMITX:      
                             HL1CMISY,HL1CMIVE,HL1CMICD,HL1CMIDI,HL1CMIUS:      
                             HL1CMIPS,HL1CMIPE,HL1CSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP1C1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P1CA1;HL1CRSID,HL1CVRID,HL1CCNT1,HL1CMAIR,HL1CMAIT:      
                             HL1CMAID,HL1CMAIU,HL1CMAIS,HL1CMAIV,HL1CMITX:      
                             HL1CMISY,HL1CMIVE,HL1CMICD,HL1CMIDI,HL1CMIUS:      
                             HL1CMIPS,HL1CMIPE,HL1CSPAR                         
          RETURN
.
WRHLP1C1  RESET     KEY78                                                       
          WRITE     HL7P1CA1,KEY78;HL1CRSID,HL1CVRID,HL1CCNT1,HL1CMAIR,HL1CMAIT:
                                   HL1CMAID,HL1CMAIU,HL1CMAIS,HL1CMAIV,HL1CMITX:
                                   HL1CMISY,HL1CMIVE,HL1CMICD,HL1CMIDI,HL1CMIUS:
                                   HL1CMIPS,HL1CMIPE,HL1CSPAR                   
          RETURN
.
DEHLP1C1  RESET     KEY78                                                       
          DELETE    HL7P1CA1,KEY78                                              
          RETURN
.
