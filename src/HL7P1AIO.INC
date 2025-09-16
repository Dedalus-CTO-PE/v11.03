.
. HL7P1AIO    
. --------
. Filename     : hl7p1aaf.dat
.
RSHLP1A1  RESET     KEY78                                                       
          READ      HL7P1AA1,KEY78;;                                            
          RETURN
.
RAHLP1A1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1AA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP1A1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1AA1,KEY78;HL1ARSID,HL1AVRID,HL1ACNT1,HL1ATSYS,HL1ATVER:
                                   HL1ATCOD,HL1ATDIS,HL1ATUSL,HL1ATSY2,HL1ATVE2:
                                   HL1ATCO2,HL1ATDI2,HL1ATUS2,HL1AACTV,HL1AGEND:
                                   HL1ABDAT,HL1ADEBO,HL1ADEDT,HL1AMATX,HL1AMASY:
                                   HL1AMAVE,HL1AMACO,HL1AMADI,HL1AMAUS,HL1AMBBO:
                                   HL1AMBIN,HL1ASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP1A1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P1AA1;HL1ARSID,HL1AVRID,HL1ACNT1,HL1ATSYS,HL1ATVER:      
                             HL1ATCOD,HL1ATDIS,HL1ATUSL,HL1ATSY2,HL1ATVE2:      
                             HL1ATCO2,HL1ATDI2,HL1ATUS2,HL1AACTV,HL1AGEND:      
                             HL1ABDAT,HL1ADEBO,HL1ADEDT,HL1AMATX,HL1AMASY:      
                             HL1AMAVE,HL1AMACO,HL1AMADI,HL1AMAUS,HL1AMBBO:      
                             HL1AMBIN,HL1ASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP1A1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P1AA1;HL1ARSID,HL1AVRID,HL1ACNT1,HL1ATSYS,HL1ATVER:      
                             HL1ATCOD,HL1ATDIS,HL1ATUSL,HL1ATSY2,HL1ATVE2:      
                             HL1ATCO2,HL1ATDI2,HL1ATUS2,HL1AACTV,HL1AGEND:      
                             HL1ABDAT,HL1ADEBO,HL1ADEDT,HL1AMATX,HL1AMASY:      
                             HL1AMAVE,HL1AMACO,HL1AMADI,HL1AMAUS,HL1AMBBO:      
                             HL1AMBIN,HL1ASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP1A1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P1AA1;HL1ARSID,HL1AVRID,HL1ACNT1,HL1ATSYS,HL1ATVER:      
                             HL1ATCOD,HL1ATDIS,HL1ATUSL,HL1ATSY2,HL1ATVE2:      
                             HL1ATCO2,HL1ATDI2,HL1ATUS2,HL1AACTV,HL1AGEND:      
                             HL1ABDAT,HL1ADEBO,HL1ADEDT,HL1AMATX,HL1AMASY:      
                             HL1AMAVE,HL1AMACO,HL1AMADI,HL1AMAUS,HL1AMBBO:      
                             HL1AMBIN,HL1ASPAR                                  
          RETURN
.
WRHLP1A1  RESET     KEY78                                                       
          WRITE     HL7P1AA1,KEY78;HL1ARSID,HL1AVRID,HL1ACNT1,HL1ATSYS,HL1ATVER:
                                   HL1ATCOD,HL1ATDIS,HL1ATUSL,HL1ATSY2,HL1ATVE2:
                                   HL1ATCO2,HL1ATDI2,HL1ATUS2,HL1AACTV,HL1AGEND:
                                   HL1ABDAT,HL1ADEBO,HL1ADEDT,HL1AMATX,HL1AMASY:
                                   HL1AMAVE,HL1AMACO,HL1AMADI,HL1AMAUS,HL1AMBBO:
                                   HL1AMBIN,HL1ASPAR                            
          RETURN
.
DEHLP1A1  RESET     KEY78                                                       
          DELETE    HL7P1AA1,KEY78                                              
          RETURN
.
