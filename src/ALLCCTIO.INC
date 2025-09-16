.
. ALLCCTIO    
. --------
. Filename     : allcctaf.dat
.
RSALCCT1  RESET     KEY6                                                        
          READ      ALLCCTA1,KEY6;;                                             
          RETURN
.
RAALCCT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLCCTA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCCT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLCCTA1,KEY6;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID: 
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCCT1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLCCTA1;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID:      
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCCT1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLCCTA1;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID:      
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCCT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLCCTA1;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID:      
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCCT1  RESET     KEY6                                                        
          WRITE     ALLCCTA1,KEY6;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID: 
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          RETURN
.
DEALCCT1  RESET     KEY6                                                        
          DELETE    ALLCCTA1,KEY6                                               
          RETURN
.
RLALCCT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     ALLCCTA1,KEY6;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID: 
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCCT1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLCCTA1;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID:      
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCCT1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLCCTA1;ALCCDEPT,ALCCCONT,ALCCCDAT,ALCCCTIM,ALCCCUID:      
                        ALCCUDAT,ALCCUTIM,ALCCUUID,ALCCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCCT1  RESET     KEY6                                                        
          UNLOCK    ALLCCTA1                                                    
          RETURN
.
