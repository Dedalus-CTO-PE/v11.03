.
. HL7FA1IO    
. --------
. Filename     : hl7fa1af.dat
.
RSHLFA11  RESET     KEY78                                                       
          READ      HL7FA1A1,KEY78;;                                            
          RETURN
.
RAHLFA11  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA1A1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA11  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA1A1,KEY78;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:
                                   HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:
                                   HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:
                                   HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:
                                   HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:
                                   HLA1TYPE,HLA1SPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA11  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA1A1;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA11  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA1A1;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA11  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA1A1;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          RETURN
.
WRHLFA11  RESET     KEY78                                                       
          WRITE     HL7FA1A1,KEY78;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:
                                   HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:
                                   HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:
                                   HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:
                                   HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:
                                   HLA1TYPE,HLA1SPAR                            
          RETURN
.
DEHLFA11  RESET     KEY78                                                       
          DELETE    HL7FA1A1,KEY78                                              
          RETURN
.
RSHLFA12  RESET     KEY142                                                      
          READ      HL7FA1A2,KEY142;;                                           
          RETURN
.
RAHLFA12  RESET     KEY142                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FA1A2,KEY142;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA12  RESET     KEY142                                                      
          MOVE      ZERO,OVRCD
          READ      HL7FA1A2,KEY142;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS:        
                                    HLA1TVER,HLA1TCOD,HLA1TDIS,HLA1TUSL:        
                                    HLA1TSY2,HLA1TVE2,HLA1TCO2,HLA1TDI2:        
                                    HLA1TUS2,HLA1CLST,HLA1CURI,HLA1CVER:        
                                    HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:        
                                    HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS:        
                                    HLA1VUSL,HLA1TYPE,HLA1SPAR                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA12  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA1A2;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA12  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA1A2;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA12  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA1A2;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS,HLA1TVER:      
                             HLA1TCOD,HLA1TDIS,HLA1TUSL,HLA1TSY2,HLA1TVE2:      
                             HLA1TCO2,HLA1TDI2,HLA1TUS2,HLA1CLST,HLA1CURI:      
                             HLA1CVER,HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:      
                             HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS,HLA1VUSL:      
                             HLA1TYPE,HLA1SPAR                                  
          RETURN
.
WRHLFA12  RESET     KEY142                                                      
          WRITE     HL7FA1A2,KEY142;HLA1RSID,HLA1VRID,HLA1CNT1,HLA1TSYS:        
                                    HLA1TVER,HLA1TCOD,HLA1TDIS,HLA1TUSL:        
                                    HLA1TSY2,HLA1TVE2,HLA1TCO2,HLA1TDI2:        
                                    HLA1TUS2,HLA1CLST,HLA1CURI,HLA1CVER:        
                                    HLA1CCOD,HLA1CDIS,HLA1CUSL,HLA1VLST:        
                                    HLA1VURI,HLA1VVER,HLA1VCOD,HLA1VDIS:        
                                    HLA1VUSL,HLA1TYPE,HLA1SPAR                  
          RETURN
.
DEHLFA12  RESET     KEY142                                                      
          DELETE    HL7FA1A2,KEY142                                             
          RETURN
.
