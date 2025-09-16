.
. EMRLHIIO    
. --------
. Filename     : emrlhiaf.dat
.
RSEMLHI1  RESET     KEY22                                                       
          READ      EMRLHIA1,KEY22;;                                            
          RETURN
.
RAEMLHI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLHI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA1,KEY22;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLHI1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRLHIA1;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLHI1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRLHIA1;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRLHIA1;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          RETURN
.
WREMLHI1  RESET     KEY22                                                       
          WRITE     EMRLHIA1,KEY22;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          RETURN
.
DEEMLHI1  RESET     KEY22                                                       
          DELETE    EMRLHIA1,KEY22                                              
          RETURN
.
RSEMLHI2  RESET     KEY38                                                       
          READ      EMRLHIA2,KEY38;;                                            
          RETURN
.
RAEMLHI2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLHI2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA2,KEY38;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLHI2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRLHIA2;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLHI2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRLHIA2;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLHI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRLHIA2;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          RETURN
.
WREMLHI2  RESET     KEY38                                                       
          WRITE     EMRLHIA2,KEY38;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          RETURN
.
DEEMLHI2  RESET     KEY38                                                       
          DELETE    EMRLHIA2,KEY38                                              
          RETURN
.
RSEMLHI3  RESET     KEY23                                                       
          READ      EMRLHIA3,KEY23;;                                            
          RETURN
.
RAEMLHI3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLHI3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLHIA3,KEY23;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLHI3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRLHIA3;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLHI3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRLHIA3;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLHI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRLHIA3;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:      
                             EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:      
                             EMLHCTIM,EMLHCUID,EMLHSPAR                         
          RETURN
.
WREMLHI3  RESET     KEY23                                                       
          WRITE     EMRLHIA3,KEY23;EMLHLOCA,EMLHSCOD,EMLHOTYP,EMLHEFDT,EMLHEFTM:
                                   EMLHDELE,EMLHACTV,EMLHSSIN,EMLHMAXP,EMLHCDAT:
                                   EMLHCTIM,EMLHCUID,EMLHSPAR                   
          RETURN
.
DEEMLHI3  RESET     KEY23                                                       
          DELETE    EMRLHIA3,KEY23                                              
          RETURN
.
