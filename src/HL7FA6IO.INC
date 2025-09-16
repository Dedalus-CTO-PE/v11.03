.
. HL7FA6IO    
. --------
. Filename     : hl7fa6af.dat
.
RSHLFA61  RESET     KEY86                                                       
          READ      HL7FA6A1,KEY86;;                                            
          RETURN
.
RAHLFA61  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA6A1,KEY86;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA61  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA6A1,KEY86;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:
                                   HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:
                                   HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:
                                   HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:
                                   HLA6NIPS,HLA6NIPE,HLA6SPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA61  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA6A1;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA61  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA6A1;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA61  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA6A1;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          RETURN
.
WRHLFA61  RESET     KEY86                                                       
          WRITE     HL7FA6A1,KEY86;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:
                                   HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:
                                   HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:
                                   HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:
                                   HLA6NIPS,HLA6NIPE,HLA6SPAR                   
          RETURN
.
DEHLFA61  RESET     KEY86                                                       
          DELETE    HL7FA6A1,KEY86                                              
          RETURN
.
RSHLFA62  RESET     KEY86                                                       
          READ      HL7FA6A2,KEY86;;                                            
          RETURN
.
RAHLFA62  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA6A2,KEY86;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA62  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA6A2,KEY86;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:
                                   HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:
                                   HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:
                                   HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:
                                   HLA6NIPS,HLA6NIPE,HLA6SPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA62  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA6A2;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA62  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA6A2;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA62  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA6A2;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:      
                             HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:      
                             HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:      
                             HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:      
                             HLA6NIPS,HLA6NIPE,HLA6SPAR                         
          RETURN
.
WRHLFA62  RESET     KEY86                                                       
          WRITE     HL7FA6A2,KEY86;HLA6RSID,HLA6VRID,HLA6CNT1,HLA6CNT2,HLA6CNT3:
                                   HLA6NTIM,HLA6NTXT,HLA6NSTR,HLA6NREF,HLA6NTYP:
                                   HLA6NDIS,HLA6NIDU,HLA6NSYS,HLA6NIVL,HLA6NIDS:
                                   HLA6NIDV,HLA6NIDC,HLA6NIDD,HLA6NIUS,HLA6NIDT:
                                   HLA6NIPS,HLA6NIPE,HLA6SPAR                   
          RETURN
.
DEHLFA62  RESET     KEY86                                                       
          DELETE    HL7FA6A2,KEY86                                              
          RETURN
.
