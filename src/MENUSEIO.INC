.
. MENUSEIO    
. --------
. Filename     : menuseaf.dat
.
RSMEUS1   RESET     KEY15                                                       
          READ      MENUSER1,KEY15;;                                            
          RETURN
.
RAMEUS1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      MENUSER1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMEUS1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      MENUSER1,KEY15;MEUSMENU,MEUSK2,MEUSK3,MEUSK4,MEUSD1:        
                        MEUSD2                                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMEUS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    MENUSER1;MEUSMENU,MEUSK2,MEUSK3,MEUSK4,MEUSD1:              
                        MEUSD2                                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMEUS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    MENUSER1;MEUSMENU,MEUSK2,MEUSK3,MEUSK4,MEUSD1:              
                        MEUSD2                                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMEUS1                                                                         
          UPDATE    MENUSER1;MEUSMENU,MEUSK2,MEUSK3,MEUSK4,MEUSD1:              
                        MEUSD2                                                  
          RETURN
.
WRMEUS1   RESET     KEY15                                                       
          WRITE     MENUSER1,KEY15;MEUSMENU,MEUSK2,MEUSK3,MEUSK4,MEUSD1:        
                        MEUSD2                                                  
          RETURN
.
DEMEUS1   RESET     KEY15                                                       
          DELETE    MENUSER1,KEY15                                              
          RETURN
.
