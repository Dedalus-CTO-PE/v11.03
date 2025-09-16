.
. OPRTHIIO    
. --------
. Filename     : oprthiaf.dat
.
RSOPTHI1  RESET     KEY75                                                       
          READ      OPRTHIA1,KEY75;;                                            
          RETURN
.
RAOPTHI1  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA1,KEY75;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTHI1  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA1,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTHI1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRTHIA1;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTHI1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRTHIA1;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRTHIA1;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTHI1  RESET     KEY75                                                       
          WRITE     OPRTHIA1,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          RETURN
.
DEOPTHI1  RESET     KEY75                                                       
          DELETE    OPRTHIA1,KEY75                                              
          RETURN
.
RLOPTHI1  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTHIA1,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPTHI1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRTHIA1;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPTHI1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRTHIA1;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPTHI1  RESET     KEY75                                                       
          UNLOCK    OPRTHIA1                                                    
          RETURN
.
RSOPTHI2  RESET     KEY75                                                       
          READ      OPRTHIA2,KEY75;;                                            
          RETURN
.
RAOPTHI2  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA2,KEY75;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTHI2  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA2,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTHI2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRTHIA2;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTHI2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRTHIA2;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTHI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRTHIA2;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTHI2  RESET     KEY75                                                       
          WRITE     OPRTHIA2,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          RETURN
.
DEOPTHI2  RESET     KEY75                                                       
          DELETE    OPRTHIA2,KEY75                                              
          RETURN
.
RLOPTHI2  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTHIA2,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPTHI2  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRTHIA2;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPTHI2  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRTHIA2;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPTHI2  RESET     KEY75                                                       
          UNLOCK    OPRTHIA2                                                    
          RETURN
.
RSOPTHI3  RESET     KEY75                                                       
          READ      OPRTHIA3,KEY75;;                                            
          RETURN
.
RAOPTHI3  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA3,KEY75;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTHI3  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA3,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTHI3  MOVE      ZERO,OVRCD                                                  
          READKS    OPRTHIA3;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTHI3  MOVE      ZERO,OVRCD                                                  
          READKP    OPRTHIA3;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTHI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRTHIA3;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTHI3  RESET     KEY75                                                       
          WRITE     OPRTHIA3,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          RETURN
.
DEOPTHI3  RESET     KEY75                                                       
          DELETE    OPRTHIA3,KEY75                                              
          RETURN
.
RLOPTHI3  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTHIA3,KEY75;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPTHI3  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRTHIA3;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPTHI3  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRTHIA3;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPTHI3  RESET     KEY75                                                       
          UNLOCK    OPRTHIA3                                                    
          RETURN
.
RSOPTHI4  RESET     KEY76                                                       
          READ      OPRTHIA4,KEY76;;                                            
          RETURN
.
RAOPTHI4  RESET     KEY76                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA4,KEY76;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTHI4  RESET     KEY76                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTHIA4,KEY76;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTHI4  MOVE      ZERO,OVRCD                                                  
          READKS    OPRTHIA4;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTHI4  MOVE      ZERO,OVRCD                                                  
          READKP    OPRTHIA4;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTHI4  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRTHIA4;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTHI4  RESET     KEY76                                                       
          WRITE     OPRTHIA4,KEY76;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          RETURN
.
DEOPTHI4  RESET     KEY76                                                       
          DELETE    OPRTHIA4,KEY76                                              
          RETURN
.
RLOPTHI4  RESET     KEY76                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTHIA4,KEY76;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:
                                   OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:
                                   OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPTHI4  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRTHIA4;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPTHI4  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRTHIA4;OPTICODE,OPTIDESC,OPTIMCHG,OPTITYIM,OPTIMANU:      
                             OPTISIZE,OPTISUPP,OPTICOST,OPTICOPC,OPTISTAT:      
                             OPTIREGI,OPTIBCOD,OPTIAIMP,OPTILOTN,OPTISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPTHI4  RESET     KEY76                                                       
          UNLOCK    OPRTHIA4                                                    
          RETURN
.
