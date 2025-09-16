.
. PMSWX1IO    
. --------
. Filename     : pmswx1af.dat
.
RSPMWX11  RESET     KEY8                                                        
          READ      PMSWX1A1,KEY8;;                                             
          RETURN
.
RAPMWX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWX1A1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWX1A1,KEY8;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM: 
                                  PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT: 
                                  PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE: 
                                  PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI: 
                                  PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT: 
                                  PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP: 
                                  PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA: 
                                  PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD: 
                                  PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO: 
                                  PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR: 
                                  PMWXPORD,PMWXVHCP,PMWXSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWX11  MOVE      ZERO,OVRCD                                                  
          READKS    PMSWX1A1;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWX11  MOVE      ZERO,OVRCD                                                  
          READKP    PMSWX1A1;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWX11  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSWX1A1;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMWX11  RESET     KEY8                                                        
          WRITE     PMSWX1A1,KEY8;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM: 
                                  PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT: 
                                  PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE: 
                                  PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI: 
                                  PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT: 
                                  PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP: 
                                  PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA: 
                                  PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD: 
                                  PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO: 
                                  PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR: 
                                  PMWXPORD,PMWXVHCP,PMWXSPAR                    
          RETURN
.
DEPMWX11  RESET     KEY8                                                        
          DELETE    PMSWX1A1,KEY8                                               
          RETURN
.
RLPMWX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSWX1A1,KEY8;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM: 
                                  PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT: 
                                  PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE: 
                                  PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI: 
                                  PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT: 
                                  PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP: 
                                  PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA: 
                                  PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD: 
                                  PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO: 
                                  PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR: 
                                  PMWXPORD,PMWXVHCP,PMWXSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMWX11  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSWX1A1;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMWX11  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSWX1A1;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMWX11  RESET     KEY8                                                        
          UNLOCK    PMSWX1A1                                                    
          RETURN
.
RSPMWX12  RESET     KEY17                                                       
          READ      PMSWX1A2,KEY17;;                                            
          RETURN
.
RAPMWX12  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWX1A2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWX12  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWX1A2,KEY17;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:
                                   PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:
                                   PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:
                                   PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:
                                   PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:
                                   PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:
                                   PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:
                                   PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:
                                   PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:
                                   PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:
                                   PMWXPORD,PMWXVHCP,PMWXSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWX12  MOVE      ZERO,OVRCD                                                  
          READKS    PMSWX1A2;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWX12  MOVE      ZERO,OVRCD                                                  
          READKP    PMSWX1A2;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWX12  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSWX1A2;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMWX12  RESET     KEY17                                                       
          WRITE     PMSWX1A2,KEY17;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:
                                   PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:
                                   PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:
                                   PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:
                                   PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:
                                   PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:
                                   PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:
                                   PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:
                                   PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:
                                   PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:
                                   PMWXPORD,PMWXVHCP,PMWXSPAR                   
          RETURN
.
DEPMWX12  RESET     KEY17                                                       
          DELETE    PMSWX1A2,KEY17                                              
          RETURN
.
RLPMWX12  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PMSWX1A2,KEY17;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:
                                   PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:
                                   PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:
                                   PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:
                                   PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:
                                   PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:
                                   PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:
                                   PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:
                                   PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:
                                   PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:
                                   PMWXPORD,PMWXVHCP,PMWXSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMWX12  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSWX1A2;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMWX12  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSWX1A2;PMWXVISN,PMWXALOC,PMWXCINJ,PMWXICOD,PMWXCNAM:      
                             PMWXCDTE,PMWXCTIM,PMWXWEBC,PMWXLUPD,PMWXLUPT:      
                             PMWXWEBU,PMWXACCF,PMWXPLIN,PMWXACTI,PMWXADTE:      
                             PMWXATME,PMWXACLC,PMWXAINZ,PMWXMOVV,PMWXSPTI:      
                             PMWXSPRT,PMWXRECI,PMWXTRIC,PMWXESTA,PMWXPDDT:      
                             PMWXARG1,PMWXARG2,PMWXARSN,PMWXARTL,PMWXARRP:      
                             PMWXASST,PMWXNEED,PMWXCONT,PMWXALTW,PMWXTYPA:      
                             PMWXSALT,PMWXHPDA,PMWXUNFD,PMWXUNFT,PMWXFISD:      
                             PMWXRNWD,PMWXCSTA,PMWXTWRK,PMWXOEST,PMWXTPRO:      
                             PMWXECOD,PMWXGRAD,PMWXAHOS,PMWXVCON,PMWXAPPR:      
                             PMWXPORD,PMWXVHCP,PMWXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMWX12  RESET     KEY17                                                       
          UNLOCK    PMSWX1A2                                                    
          RETURN
.
