.
. PMSLHIIO    
. --------
. Filename     : pmslhiaf.dat
.
RSPMLHI1  RESET     KEY19                                                       
          READ      PMSLHIA1,KEY19;;                                            
          RETURN
.
RAPMLHI1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLHIA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLHI1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLHIA1,KEY19;PMLHVISN,PMLHDATE,PMLHLETN,PMLHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLHI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLHIA1;PMLHVISN,PMLHDATE,PMLHLETN,PMLHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLHI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLHIA1;PMLHVISN,PMLHDATE,PMLHLETN,PMLHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLHI1                                                                        
          UPDATE    PMSLHIA1;PMLHVISN,PMLHDATE,PMLHLETN,PMLHSPAR                
          RETURN
.
WRPMLHI1  RESET     KEY19                                                       
          WRITE     PMSLHIA1,KEY19;PMLHVISN,PMLHDATE,PMLHLETN,PMLHSPAR          
          RETURN
.
DEPMLHI1  RESET     KEY19                                                       
          DELETE    PMSLHIA1,KEY19                                              
          RETURN
.
