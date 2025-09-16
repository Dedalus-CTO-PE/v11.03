.
. HL7FA5IO    
. --------
. Filename     : hl7fa5af.dat
.
RSHLFA51  RESET     KEY82                                                       
          READ      HL7FA5A1,KEY82;;                                            
          RETURN
.
RAHLFA51  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA5A1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA51  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA5A1,KEY82;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:
                                   HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:
                                   HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:
                                   HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:
                                   HLA5NIPE,HLA5SPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA51  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA5A1;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA51  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA5A1;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA51  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA5A1;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          RETURN
.
WRHLFA51  RESET     KEY82                                                       
          WRITE     HL7FA5A1,KEY82;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:
                                   HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:
                                   HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:
                                   HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:
                                   HLA5NIPE,HLA5SPAR                            
          RETURN
.
DEHLFA51  RESET     KEY82                                                       
          DELETE    HL7FA5A1,KEY82                                              
          RETURN
.
RSHLFA52  RESET     KEY82                                                       
          READ      HL7FA5A2,KEY82;;                                            
          RETURN
.
RAHLFA52  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA5A2,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA52  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA5A2,KEY82;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:
                                   HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:
                                   HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:
                                   HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:
                                   HLA5NIPE,HLA5SPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA52  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA5A2;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA52  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA5A2;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA52  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA5A2;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:      
                             HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:      
                             HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:      
                             HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:      
                             HLA5NIPE,HLA5SPAR                                  
          RETURN
.
WRHLFA52  RESET     KEY82                                                       
          WRITE     HL7FA5A2,KEY82;HLA5RSID,HLA5VRID,HLA5CNT1,HLA5CNT2,HLA5NTIM:
                                   HLA5NTXT,HLA5NSTR,HLA5NREF,HLA5NTYP,HLA5NDIS:
                                   HLA5NIDU,HLA5NSYS,HLA5NIVL,HLA5NIDS,HLA5NIDV:
                                   HLA5NIDC,HLA5NIDD,HLA5NIUS,HLA5NIDT,HLA5NIPS:
                                   HLA5NIPE,HLA5SPAR                            
          RETURN
.
DEHLFA52  RESET     KEY82                                                       
          DELETE    HL7FA5A2,KEY82                                              
          RETURN
.
