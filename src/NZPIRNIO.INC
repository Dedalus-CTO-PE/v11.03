.
. NZPIRNIO    
. --------
. Filename     : nzpirnaf.dat
.
RSNZIRN1  RESET     KEY6                                                        
          READ      NZPIRNA1,KEY6;;                                             
          RETURN
.
RANZIRN1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NZPIRNA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZIRN1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NZPIRNA1,KEY6;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI: 
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZIRN1  MOVE      ZERO,OVRCD
          READKS    NZPIRNA1;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZIRN1  MOVE      ZERO,OVRCD
          READKP    NZPIRNA1;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZIRN1  UPDATE    NZPIRNA1;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          RETURN
.
WRNZIRN1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO
          WRITE     NZPIRNA1,KEY6;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI: 
                        NZIRSPAR                                                
          TRAPCLR   IO
          RETURN
.
DENZIRN1  RESET     KEY6                                                        
          DELETE    NZPIRNA1,KEY6                                               
          RETURN
.
NZIRNA1   RESET     KEY6
          READL     NZPIRNA1,KEY6;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:
                                  NZIRSPAR
          GOTO      OVERCOND IF OVER
          IF        @LOCKED
            DISPLAY   *W,"Waiting on Invoice Range.."
            GOTO      NZIRNA1
          ENDIF
.
          COMPARE   NZIRMAXI,NZIRNEXT
          GOTO      OVERLOCK IF NOT LESS
.
          ADD       ONE,NZIRNEXT
          UPDATE    NZPIRNA1;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:
                             NZIRSPAR
          UNLOCK    NZPIRNA1
.
          SUB       ONE,NZIRNEXT
          MOVE      ZERO,OVRCD
          RETURN
.
RSNZIRN2  RESET     KEY6                                                        
          READ      NZPIRNA2,KEY6;;                                             
          RETURN
.
RANZIRN2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NZPIRNA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZIRN2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NZPIRNA2,KEY6;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI: 
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZIRN2  MOVE      ZERO,OVRCD
          READKS    NZPIRNA2;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZIRN2  MOVE      ZERO,OVRCD
          READKP    NZPIRNA2;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZIRN2  UPDATE    NZPIRNA2;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI:      
                        NZIRSPAR                                                
          RETURN
.
WRNZIRN2  RESET     KEY6                                                        
          WRITE     NZPIRNA2,KEY6;NZIRHOSP,NZIRIRNG,NZIRDESC,NZIRNEXT,NZIRMAXI: 
                        NZIRSPAR                                                
          RETURN
.
DENZIRN2  RESET     KEY6                                                        
          DELETE    NZPIRNA2,KEY6                                               
          RETURN
.
