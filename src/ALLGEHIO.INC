.
. ALLGEHIO    
. --------
. Filename     : allgehaf.dat
.
RSALGEH1  RESET     KEY21                                                       
          READ      ALLGEHA1,KEY21;;                                            
          RETURN
.
RAALGEH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGEHA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGEH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGEHA1,KEY21;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGEH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGEHA1;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:      
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGEH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGEHA1;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:      
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGEH1                                                                        
          UPDATE    ALLGEHA1;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:      
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGEH1  RESET     KEY21                                                       
          WRITE     ALLGEHA1,KEY21;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          RETURN
.
DEALGEH1  RESET     KEY21                                                       
          DELETE    ALLGEHA1,KEY21                                              
          RETURN
.
RLALGEH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGEHA1,KEY21;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGEH1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGEHA1;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:      
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGEH1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGEHA1;ALGCCONT,ALGCHCPC,ALGCSPEC,ALGCHSTA,ALGCCDAT:      
                        ALGCCTIM,ALGCCUID,ALGCUDAT,ALGCUTIM,ALGCUUID,ALGCSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGEH1  RESET     KEY21                                                       
          UNLOCK    ALLGEHA1                                                    
          RETURN
.
