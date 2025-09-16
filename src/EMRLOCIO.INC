.
. EMRLOCIO    
. --------
. Filename     : emrlocaf.dat
.
RSEMLOC1  RESET     KEY3                                                        
          READ      EMRLOCA1,KEY3;;                                             
          RETURN
.
RAEMLOC1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      EMRLOCA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLOC1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      EMRLOCA1,KEY3;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLOC1  MOVE      ZERO,OVRCD
          READKS    EMRLOCA1;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLOC1  MOVE      ZERO,OVRCD
          READKP    EMRLOCA1;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLOC1  UPDATE    EMRLOCA1;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMLOC1  RESET     KEY3                                                        
          WRITE     EMRLOCA1,KEY3;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR  
          RETURN
.
DEEMLOC1  RESET     KEY3                                                        
          DELETE    EMRLOCA1,KEY3                                               
          RETURN
.
RLEMLOC1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     EMRLOCA1,KEY3;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMLOC1  MOVE      ZERO,OVRCD
          READLKS   EMRLOCA1;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMLOC1  MOVE      ZERO,OVRCD
          READLKP   EMRLOCA1;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMLOC1  RESET     KEY3                                                        
          UNLOCK    EMRLOCA1                                                    
          RETURN
.
RSEMLOC2  RESET     KEY28                                                       
          READ      EMRLOCA2,KEY28;;                                            
          RETURN
.
RAEMLOC2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLOCA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLOC2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLOCA2,KEY28;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLOC2  MOVE      ZERO,OVRCD
          READKS    EMRLOCA2;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLOC2  MOVE      ZERO,OVRCD
          READKP    EMRLOCA2;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLOC2  UPDATE    EMRLOCA2;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMLOC2  RESET     KEY28                                                       
          WRITE     EMRLOCA2,KEY28;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR 
          RETURN
.
DEEMLOC2  RESET     KEY28                                                       
          DELETE    EMRLOCA2,KEY28                                              
          RETURN
.
RLEMLOC2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     EMRLOCA2,KEY28;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMLOC2  MOVE      ZERO,OVRCD
          READLKS   EMRLOCA2;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMLOC2  MOVE      ZERO,OVRCD
          READLKP   EMRLOCA2;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMLOC2  RESET     KEY28                                                       
          UNLOCK    EMRLOCA2                                                    
          RETURN
.
RSEMLOC3  RESET     KEY7
          READ      EMRLOCA3,KEY7;;
          RETURN
.
RAEMLOC3  RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      EMRLOCA3,KEY7;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLOC3  RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      EMRLOCA3,KEY7;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLOC3  MOVE      ZERO,OVRCD
          READKS    EMRLOCA3;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLOC3  MOVE      ZERO,OVRCD
          READKP    EMRLOCA3;EMLOLOCA,EMLODESC,EMLOSCOD,EMLOMAXP,EMLOTYPE:
                             EMLOACTV,EMLOSSIN,EMLOCDAT,EMLOCTIM,EMLOCUID:
                             EMLOUDAT,EMLOUTIM,EMLOUUID,EMLOIDAT,EMLOITIM:
                             EMLOIUID,EMLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
