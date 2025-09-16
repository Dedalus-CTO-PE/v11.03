.
. HL7FAAIO    
. --------
. Filename     : hl7faaaf.dat
.
RSHLFAA1  RESET     KEY82                                                       
          READ      HL7FAAA1,KEY82;;                                            
          RETURN
.
RAHLFAA1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAAA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAA1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAAA1,KEY82;HLAARSID,HLAAVRID,HLAACNT1,HLAACNT2,HLAAIDUS:
                                   HLAAIDSY,HLAAIDVE,HLAAIDCD,HLAAIDDI,HLAAIDSL:
                                   HLAAIDTX,HLAASYST,HLAAIDVA,HLAAPSTA,HLAAPEND:
                                   HLAAAREF,HLAAATYP,HLAAADIS,HLAAIUSE,HLAAISYS:
                                   HLAAIVAL,HLAAITXT,HLAACSYS,HLAACVER,HLAACCOD:
                                   HLAACDIS,HLAACUSS,HLAAPSTR,HLAAPREN,HLAASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAA1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAAA1;HLAARSID,HLAAVRID,HLAACNT1,HLAACNT2,HLAAIDUS:      
                             HLAAIDSY,HLAAIDVE,HLAAIDCD,HLAAIDDI,HLAAIDSL:      
                             HLAAIDTX,HLAASYST,HLAAIDVA,HLAAPSTA,HLAAPEND:      
                             HLAAAREF,HLAAATYP,HLAAADIS,HLAAIUSE,HLAAISYS:      
                             HLAAIVAL,HLAAITXT,HLAACSYS,HLAACVER,HLAACCOD:      
                             HLAACDIS,HLAACUSS,HLAAPSTR,HLAAPREN,HLAASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAA1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAAA1;HLAARSID,HLAAVRID,HLAACNT1,HLAACNT2,HLAAIDUS:      
                             HLAAIDSY,HLAAIDVE,HLAAIDCD,HLAAIDDI,HLAAIDSL:      
                             HLAAIDTX,HLAASYST,HLAAIDVA,HLAAPSTA,HLAAPEND:      
                             HLAAAREF,HLAAATYP,HLAAADIS,HLAAIUSE,HLAAISYS:      
                             HLAAIVAL,HLAAITXT,HLAACSYS,HLAACVER,HLAACCOD:      
                             HLAACDIS,HLAACUSS,HLAAPSTR,HLAAPREN,HLAASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAAA1;HLAARSID,HLAAVRID,HLAACNT1,HLAACNT2,HLAAIDUS:      
                             HLAAIDSY,HLAAIDVE,HLAAIDCD,HLAAIDDI,HLAAIDSL:      
                             HLAAIDTX,HLAASYST,HLAAIDVA,HLAAPSTA,HLAAPEND:      
                             HLAAAREF,HLAAATYP,HLAAADIS,HLAAIUSE,HLAAISYS:      
                             HLAAIVAL,HLAAITXT,HLAACSYS,HLAACVER,HLAACCOD:      
                             HLAACDIS,HLAACUSS,HLAAPSTR,HLAAPREN,HLAASPAR       
          RETURN
.
WRHLFAA1  RESET     KEY82                                                       
          WRITE     HL7FAAA1,KEY82;HLAARSID,HLAAVRID,HLAACNT1,HLAACNT2,HLAAIDUS:
                                   HLAAIDSY,HLAAIDVE,HLAAIDCD,HLAAIDDI,HLAAIDSL:
                                   HLAAIDTX,HLAASYST,HLAAIDVA,HLAAPSTA,HLAAPEND:
                                   HLAAAREF,HLAAATYP,HLAAADIS,HLAAIUSE,HLAAISYS:
                                   HLAAIVAL,HLAAITXT,HLAACSYS,HLAACVER,HLAACCOD:
                                   HLAACDIS,HLAACUSS,HLAAPSTR,HLAAPREN,HLAASPAR 
          RETURN
.
DEHLFAA1  RESET     KEY82                                                       
          DELETE    HL7FAAA1,KEY82                                              
          RETURN
.
