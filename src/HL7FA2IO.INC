.
. HL7FA2IO    
. --------
. Filename     : hl7fa2af.dat
.
RSHLFA21  RESET     KEY78                                                       
          READ      HL7FA2A1,KEY78;;                                            
          RETURN
.
RAHLFA21  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA2A1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA21  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA2A1,KEY78;HLA2RSID,HLA2VRID,HLA2CNT1,HLA2CTG1,HLA2CTG2:
                                   HLA2CTG3,HLA2CTG4,HLA2CRTY,HLA2CDTX,HLA2CDUR:
                                   HLA2CDVR,HLA2CDCD,HLA2CDDS,HLA2CDUS,HLA2OSDT:
                                   HLA2OSAG,HLA2OSPS,HLA2OSPE,HLA2ORLV,HLA2ORHV:
                                   HLA2ORLC,HLA2ORHC,HLA2OSTR,HLA2RCDT,HLA2LODT:
                                   HLA2SPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA21  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA2A1;HLA2RSID,HLA2VRID,HLA2CNT1,HLA2CTG1,HLA2CTG2:      
                             HLA2CTG3,HLA2CTG4,HLA2CRTY,HLA2CDTX,HLA2CDUR:      
                             HLA2CDVR,HLA2CDCD,HLA2CDDS,HLA2CDUS,HLA2OSDT:      
                             HLA2OSAG,HLA2OSPS,HLA2OSPE,HLA2ORLV,HLA2ORHV:      
                             HLA2ORLC,HLA2ORHC,HLA2OSTR,HLA2RCDT,HLA2LODT:      
                             HLA2SPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA21  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA2A1;HLA2RSID,HLA2VRID,HLA2CNT1,HLA2CTG1,HLA2CTG2:      
                             HLA2CTG3,HLA2CTG4,HLA2CRTY,HLA2CDTX,HLA2CDUR:      
                             HLA2CDVR,HLA2CDCD,HLA2CDDS,HLA2CDUS,HLA2OSDT:      
                             HLA2OSAG,HLA2OSPS,HLA2OSPE,HLA2ORLV,HLA2ORHV:      
                             HLA2ORLC,HLA2ORHC,HLA2OSTR,HLA2RCDT,HLA2LODT:      
                             HLA2SPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA21  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA2A1;HLA2RSID,HLA2VRID,HLA2CNT1,HLA2CTG1,HLA2CTG2:      
                             HLA2CTG3,HLA2CTG4,HLA2CRTY,HLA2CDTX,HLA2CDUR:      
                             HLA2CDVR,HLA2CDCD,HLA2CDDS,HLA2CDUS,HLA2OSDT:      
                             HLA2OSAG,HLA2OSPS,HLA2OSPE,HLA2ORLV,HLA2ORHV:      
                             HLA2ORLC,HLA2ORHC,HLA2OSTR,HLA2RCDT,HLA2LODT:      
                             HLA2SPAR                                           
          RETURN
.
WRHLFA21  RESET     KEY78                                                       
          WRITE     HL7FA2A1,KEY78;HLA2RSID,HLA2VRID,HLA2CNT1,HLA2CTG1,HLA2CTG2:
                                   HLA2CTG3,HLA2CTG4,HLA2CRTY,HLA2CDTX,HLA2CDUR:
                                   HLA2CDVR,HLA2CDCD,HLA2CDDS,HLA2CDUS,HLA2OSDT:
                                   HLA2OSAG,HLA2OSPS,HLA2OSPE,HLA2ORLV,HLA2ORHV:
                                   HLA2ORLC,HLA2ORHC,HLA2OSTR,HLA2RCDT,HLA2LODT:
                                   HLA2SPAR                                     
          RETURN
.
DEHLFA21  RESET     KEY78                                                       
          DELETE    HL7FA2A1,KEY78                                              
          RETURN
.
