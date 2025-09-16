.
. PATCCHIO    
. --------
. Filename     : patcchaf.dat
.
RSPTCCH1  RESET     KEY35                                                       
          READ      PATCCHA1,KEY35;;                                            
          RETURN
.
RAPTCCH1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATCCHA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCCH1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATCCHA1,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCCH1  MOVE      ZERO,OVRCD                                                  
          READKS    PATCCHA1;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCCH1  MOVE      ZERO,OVRCD                                                  
          READKP    PATCCHA1;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCCH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATCCHA1;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTCCH1  RESET     KEY35                                                       
          WRITE     PATCCHA1,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          RETURN
.
DEPTCCH1  RESET     KEY35                                                       
          DELETE    PATCCHA1,KEY35                                              
          RETURN
.
RLPTCCH1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     PATCCHA1,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTCCH1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATCCHA1;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTCCH1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATCCHA1;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTCCH1  RESET     KEY35                                                       
          UNLOCK    PATCCHA1                                                    
          RETURN
.
RSPTCCH2  RESET     KEY35                                                       
          READ      PATCCHA2,KEY35;;                                            
          RETURN
.
RAPTCCH2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATCCHA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCCH2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATCCHA2,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCCH2  MOVE      ZERO,OVRCD                                                  
          READKS    PATCCHA2;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCCH2  MOVE      ZERO,OVRCD                                                  
          READKP    PATCCHA2;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCCH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATCCHA2;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTCCH2  RESET     KEY35                                                       
          WRITE     PATCCHA2,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          RETURN
.
DEPTCCH2  RESET     KEY35                                                       
          DELETE    PATCCHA2,KEY35                                              
          RETURN
.
RLPTCCH2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     PATCCHA2,KEY35;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:
                                   PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:
                                   PTCCDATE,PTCCTIME,PTCCSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTCCH2  MOVE      ZERO,OVRCD                                                  
          READLKS   PATCCHA2;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTCCH2  MOVE      ZERO,OVRCD                                                  
          READLKP   PATCCHA2;PTCCURNO,PTCCCTYP,PTCCCNUM,PTCCEXDT,PTCCDVAC:      
                             PTCCUPDT,PTCCUPDR,PTCCPEXD,PTCCPCDC,PTCCURID:      
                             PTCCDATE,PTCCTIME,PTCCSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTCCH2  RESET     KEY35                                                       
          UNLOCK    PATCCHA2                                                    
          RETURN
.
