.
. HL7FA4IO    
. --------
. Filename     : hl7fa4af.dat
.
RSHLFA41  RESET     KEY86                                                       
          READ      HL7FA4A1,KEY86;;                                            
          RETURN
.
RAHLFA41  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA4A1,KEY86;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA41  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA4A1,KEY86;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:
                                   HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:
                                   HLA4RMUS,HLA4SPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA41  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA4A1;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA41  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA4A1;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA41  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA4A1;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          RETURN
.
WRHLFA41  RESET     KEY86                                                       
          WRITE     HL7FA4A1,KEY86;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:
                                   HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:
                                   HLA4RMUS,HLA4SPAR                            
          RETURN
.
DEHLFA41  RESET     KEY86                                                       
          DELETE    HL7FA4A1,KEY86                                              
          RETURN
.
RSHLFA42  RESET     KEY86                                                       
          READ      HL7FA4A2,KEY86;;                                            
          RETURN
.
RAHLFA42  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA4A2,KEY86;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA42  RESET     KEY86                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA4A2,KEY86;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:
                                   HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:
                                   HLA4RMUS,HLA4SPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA42  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA4A2;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA42  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA4A2;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA42  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA4A2;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:      
                             HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:      
                             HLA4RMUS,HLA4SPAR                                  
          RETURN
.
WRHLFA42  RESET     KEY86                                                       
          WRITE     HL7FA4A2,KEY86;HLA4RSID,HLA4VRID,HLA4CNT1,HLA4CNT2,HLA4CNT3:
                                   HLA4RMTX,HLA4RMSY,HLA4RMVR,HLA4RMCD,HLA4RMDP:
                                   HLA4RMUS,HLA4SPAR                            
          RETURN
.
DEHLFA42  RESET     KEY86                                                       
          DELETE    HL7FA4A2,KEY86                                              
          RETURN
.
