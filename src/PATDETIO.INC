.
. PATDETIO    
. --------
. Filename     : patdetaf.dat
.
RSPTDET1  RESET     KEY10                                                       
          READ      PATDETA1,KEY10;;                                            
          RETURN
.
RAPTDET1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATDETA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDET1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATDETA1,KEY10;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTDET1  MOVE      ZERO,OVRCD                                                  
          READKS    PATDETA1;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTDET1  MOVE      ZERO,OVRCD                                                  
          READKP    PATDETA1;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTDET1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATDETA1;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          RETURN
.
WRPTDET1  RESET     KEY10                                                       
          WRITE     PATDETA1,KEY10;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          RETURN
.
DEPTDET1  RESET     KEY10                                                       
          DELETE    PATDETA1,KEY10                                              
          RETURN
.
RSPTDET2  RESET     KEY18                                                       
          READ      PATDETA2,KEY18;;                                            
          RETURN
.
RAPTDET2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATDETA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDET2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATDETA2,KEY18;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTDET2  MOVE      ZERO,OVRCD                                                  
          READKS    PATDETA2;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTDET2  MOVE      ZERO,OVRCD                                                  
          READKP    PATDETA2;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTDET2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATDETA2;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:      
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          RETURN
.
WRPTDET2  RESET     KEY18                                                       
          WRITE     PATDETA2,KEY18;PTDETYPE,PTDEINVN,PTDEAGNT,PTDEDTCL,PTDECDAT:
                        PTDECTIM,PTDECUID,PTDEUDAT,PTDEUTIM,PTDEUUID,PTDEURNO:  
                        PTDESYST,PTDERPAY,PTDEFREQ,PTDESPAR                     
          RETURN
.
DEPTDET2  RESET     KEY18                                                       
          DELETE    PATDETA2,KEY18                                              
          RETURN
.
