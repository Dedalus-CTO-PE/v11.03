.
. ALLERCIO    
. --------
. Filename     : allercaf.dat
.
RSALERC1  RESET     KEY8                                                        
          READ      ALLERCA1,KEY8;;                                             
          RETURN
.
RAALERC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLERCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALERC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLERCA1,KEY8;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:  
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALERC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLERCA1;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALERC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLERCA1;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALERC1                                                                        
          UPDATE    ALLERCA1;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALERC1  RESET     KEY8                                                        
          WRITE     ALLERCA1,KEY8;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:  
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          RETURN
.
DEALERC1  RESET     KEY8                                                        
          DELETE    ALLERCA1,KEY8                                               
          RETURN
.
RLALERC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     ALLERCA1,KEY8;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:  
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALERC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLERCA1;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALERC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLERCA1;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALERC1  RESET     KEY8                                                        
          UNLOCK    ALLERCA1                                                    
          RETURN
.
RSALERC2  RESET     KEY24                                                       
          READ      ALLERCA2,KEY24;;                                            
          RETURN
.
RAALERC2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLERCA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALERC2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLERCA2,KEY24;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH: 
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALERC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLERCA2;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALERC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLERCA2;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALERC2                                                                        
          UPDATE    ALLERCA2;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALERC2  RESET     KEY24                                                       
          WRITE     ALLERCA2,KEY24;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH: 
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          RETURN
.
DEALERC2  RESET     KEY24                                                       
          DELETE    ALLERCA2,KEY24                                              
          RETURN
.
RLALERC2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLERCA2,KEY24;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH: 
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALERC2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLERCA2;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALERC2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLERCA2;ALERPHOT,ALERLASR,ALERPOSS,ALERCAR,ALERCARH:       
                        ALERNVIE,ALERNTRA,ALERNNEG,ALERNBWP,ALERNCLP,ALERNVID:  
                        ALERVISN,ALERENCT,ALERCDAT,ALERCTIM,ALERCUID,ALERUDAT:  
                        ALERUTIM,ALERUUID,ALERDSNT,ALERSTFF,ALERNDIG,ALERSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALERC2  RESET     KEY24                                                       
          UNLOCK    ALLERCA2                                                    
          RETURN
.
