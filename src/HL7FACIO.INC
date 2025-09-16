.
. HL7FACIO    
. --------
. Filename     : hl7facaf.dat
.
RSHLFAC1  RESET     KEY78                                                       
          READ      HL7FACA1,KEY78;;                                            
          RETURN
.
RAHLFAC1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FACA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAC1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FACA1,KEY78;HLACRSID,HLACVRID,HLACCNT1,HLACPARE,HLACPATY:
                                   HLACPADI,HLACPAUS,HLACPISY,HLACPIVA,HLACPITX:
                                   HLACPCSY,HLACPCVE,HLACPCCO,HLACPCDI,HLACPCUS:
                                   HLACPPST,HLACPREN,HLACSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAC1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FACA1;HLACRSID,HLACVRID,HLACCNT1,HLACPARE,HLACPATY:      
                             HLACPADI,HLACPAUS,HLACPISY,HLACPIVA,HLACPITX:      
                             HLACPCSY,HLACPCVE,HLACPCCO,HLACPCDI,HLACPCUS:      
                             HLACPPST,HLACPREN,HLACSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAC1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FACA1;HLACRSID,HLACVRID,HLACCNT1,HLACPARE,HLACPATY:      
                             HLACPADI,HLACPAUS,HLACPISY,HLACPIVA,HLACPITX:      
                             HLACPCSY,HLACPCVE,HLACPCCO,HLACPCDI,HLACPCUS:      
                             HLACPPST,HLACPREN,HLACSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FACA1;HLACRSID,HLACVRID,HLACCNT1,HLACPARE,HLACPATY:      
                             HLACPADI,HLACPAUS,HLACPISY,HLACPIVA,HLACPITX:      
                             HLACPCSY,HLACPCVE,HLACPCCO,HLACPCDI,HLACPCUS:      
                             HLACPPST,HLACPREN,HLACSPAR                         
          RETURN
.
WRHLFAC1  RESET     KEY78                                                       
          WRITE     HL7FACA1,KEY78;HLACRSID,HLACVRID,HLACCNT1,HLACPARE,HLACPATY:
                                   HLACPADI,HLACPAUS,HLACPISY,HLACPIVA,HLACPITX:
                                   HLACPCSY,HLACPCVE,HLACPCCO,HLACPCDI,HLACPCUS:
                                   HLACPPST,HLACPREN,HLACSPAR                   
          RETURN
.
DEHLFAC1  RESET     KEY78                                                       
          DELETE    HL7FACA1,KEY78                                              
          RETURN
.
