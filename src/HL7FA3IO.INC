.
. HL7FA3IO    
. --------
. Filename     : hl7fa3af.dat
.
RSHLFA31  RESET     KEY78                                                       
          READ      HL7FA3A1,KEY78;;                                            
          RETURN
.
RAHLFA31  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA3A1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFA31  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FA3A1,KEY78;HLA3RSID,HLA3VRID,HLA3CNT1,HLA3CNT2,HLA3RSTX:
                                   HLA3RSSY,HLA3RSVE,HLA3RSCD,HLA3RSDI,HLA3RSSL:
                                   HLA3RDES,HLA3ROST,HLA3RSVY,HLA3RETX,HLA3RESY:
                                   HLA3REVE,HLA3RECD,HLA3REDI,HLA3RESL,HLA3SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFA31  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FA3A1;HLA3RSID,HLA3VRID,HLA3CNT1,HLA3CNT2,HLA3RSTX:      
                             HLA3RSSY,HLA3RSVE,HLA3RSCD,HLA3RSDI,HLA3RSSL:      
                             HLA3RDES,HLA3ROST,HLA3RSVY,HLA3RETX,HLA3RESY:      
                             HLA3REVE,HLA3RECD,HLA3REDI,HLA3RESL,HLA3SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFA31  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FA3A1;HLA3RSID,HLA3VRID,HLA3CNT1,HLA3CNT2,HLA3RSTX:      
                             HLA3RSSY,HLA3RSVE,HLA3RSCD,HLA3RSDI,HLA3RSSL:      
                             HLA3RDES,HLA3ROST,HLA3RSVY,HLA3RETX,HLA3RESY:      
                             HLA3REVE,HLA3RECD,HLA3REDI,HLA3RESL,HLA3SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFA31  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FA3A1;HLA3RSID,HLA3VRID,HLA3CNT1,HLA3CNT2,HLA3RSTX:      
                             HLA3RSSY,HLA3RSVE,HLA3RSCD,HLA3RSDI,HLA3RSSL:      
                             HLA3RDES,HLA3ROST,HLA3RSVY,HLA3RETX,HLA3RESY:      
                             HLA3REVE,HLA3RECD,HLA3REDI,HLA3RESL,HLA3SPAR       
          RETURN
.
WRHLFA31  RESET     KEY78                                                       
          WRITE     HL7FA3A1,KEY78;HLA3RSID,HLA3VRID,HLA3CNT1,HLA3CNT2,HLA3RSTX:
                                   HLA3RSSY,HLA3RSVE,HLA3RSCD,HLA3RSDI,HLA3RSSL:
                                   HLA3RDES,HLA3ROST,HLA3RSVY,HLA3RETX,HLA3RESY:
                                   HLA3REVE,HLA3RECD,HLA3REDI,HLA3RESL,HLA3SPAR 
          RETURN
.
DEHLFA31  RESET     KEY78                                                       
          DELETE    HL7FA3A1,KEY78                                              
          RETURN
.
