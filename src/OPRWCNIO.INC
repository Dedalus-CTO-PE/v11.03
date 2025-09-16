.
. OPRWCNIO    
. --------
. Filename     : oprwcnaf.dat
.
RSOPWCN1  RESET     KEY11                                                       
          READ      OPRWCNA1,KEY11;;                                            
          RETURN
.
RAOPWCN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRWCNA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPWCN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRWCNA1,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPWCN1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRWCNA1;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPWCN1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRWCNA1;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPWCN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRWCNA1;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPWCN1  RESET     KEY11                                                       
          WRITE     OPRWCNA1,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          RETURN
.
DEOPWCN1  RESET     KEY11                                                       
          DELETE    OPRWCNA1,KEY11                                              
          RETURN
.
RLOPWCN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     OPRWCNA1,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPWCN1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRWCNA1;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPWCN1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRWCNA1;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPWCN1  RESET     KEY11                                                       
          UNLOCK    OPRWCNA1                                                    
          RETURN
.
RSOPWCN2  RESET     KEY11                                                       
          READ      OPRWCNA2,KEY11;;                                            
          RETURN
.
RAOPWCN2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRWCNA2,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPWCN2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRWCNA2,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPWCN2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRWCNA2;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPWCN2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRWCNA2;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPWCN2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRWCNA2;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPWCN2  RESET     KEY11                                                       
          WRITE     OPRWCNA2,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          RETURN
.
DEOPWCN2  RESET     KEY11                                                       
          DELETE    OPRWCNA2,KEY11                                              
          RETURN
.
RLOPWCN2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     OPRWCNA2,KEY11;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:
                                   OPWCCUID,OPWCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPWCN2  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRWCNA2;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPWCN2  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRWCNA2;OPWCEFFD,OPWCUNIT,OPWCWEEK,OPWCCDAT,OPWCCTIM:      
                             OPWCCUID,OPWCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPWCN2  RESET     KEY11                                                       
          UNLOCK    OPRWCNA2                                                    
          RETURN
.
