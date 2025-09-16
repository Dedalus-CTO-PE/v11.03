.
. HL7P1BIO    
. --------
. Filename     : hl7p1baf.dat
.
RSHLP1B1  RESET     KEY78                                                       
          READ      HL7P1BA1,KEY78;;                                            
          RETURN
.
RAHLP1B1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1BA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP1B1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1BA1,KEY78;HL1BRSID,HL1BVRID,HL1BCNT1,HL1BMORE,HL1BMOTY:
                                   HL1BMODI,HL1BMOUS,HL1BMOSY,HL1BMOVA,HL1BMOTX:
                                   HL1BMOTS,HL1BMOTV,HL1BMOTC,HL1BMOTD,HL1BMOTU:
                                   HL1BMOPS,HL1BMOPE,HL1BSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP1B1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P1BA1;HL1BRSID,HL1BVRID,HL1BCNT1,HL1BMORE,HL1BMOTY:      
                             HL1BMODI,HL1BMOUS,HL1BMOSY,HL1BMOVA,HL1BMOTX:      
                             HL1BMOTS,HL1BMOTV,HL1BMOTC,HL1BMOTD,HL1BMOTU:      
                             HL1BMOPS,HL1BMOPE,HL1BSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP1B1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P1BA1;HL1BRSID,HL1BVRID,HL1BCNT1,HL1BMORE,HL1BMOTY:      
                             HL1BMODI,HL1BMOUS,HL1BMOSY,HL1BMOVA,HL1BMOTX:      
                             HL1BMOTS,HL1BMOTV,HL1BMOTC,HL1BMOTD,HL1BMOTU:      
                             HL1BMOPS,HL1BMOPE,HL1BSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP1B1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P1BA1;HL1BRSID,HL1BVRID,HL1BCNT1,HL1BMORE,HL1BMOTY:      
                             HL1BMODI,HL1BMOUS,HL1BMOSY,HL1BMOVA,HL1BMOTX:      
                             HL1BMOTS,HL1BMOTV,HL1BMOTC,HL1BMOTD,HL1BMOTU:      
                             HL1BMOPS,HL1BMOPE,HL1BSPAR                         
          RETURN
.
WRHLP1B1  RESET     KEY78                                                       
          WRITE     HL7P1BA1,KEY78;HL1BRSID,HL1BVRID,HL1BCNT1,HL1BMORE,HL1BMOTY:
                                   HL1BMODI,HL1BMOUS,HL1BMOSY,HL1BMOVA,HL1BMOTX:
                                   HL1BMOTS,HL1BMOTV,HL1BMOTC,HL1BMOTD,HL1BMOTU:
                                   HL1BMOPS,HL1BMOPE,HL1BSPAR                   
          RETURN
.
DEHLP1B1  RESET     KEY78                                                       
          DELETE    HL7P1BA1,KEY78                                              
          RETURN
.
