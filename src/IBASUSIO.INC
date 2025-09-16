.
. IBASUSIO    
. --------
. Filename     : ibasusaf.dat
.
. Modifications : 
.
RSIBSUS1  RESET     KEY14          
          READ      IBASUSA1,KEY14;;
          RETURN
.
RAIBSUS1  RESET     KEY14         
          MOVE      ZERO,OVRCD
          READ      IBASUSA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBSUS1  RESET     KEY14        
          MOVE      ZERO,OVRCD
          READ      IBASUSA1,KEY14;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBSUS1  MOVE      ZERO,OVRCD
          READKS    IBASUSA1;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBSUS1  MOVE      ZERO,OVRCD
          READKP    IBASUSA1;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBSUS1  UPDATE    IBASUSA1;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          RETURN
.
WRIBSUS1  MOVE      ZERO,OVRCD 
          RESET     KEY14  
          WRITE     IBASUSA1,KEY14;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          RETURN
.
DEIBSUS1  RESET     KEY14        
          DELETE    IBASUSA1,KEY14
          RETURN
...............................................................................
RSIBSUS2  RESET     KEY14                                                       
          READ      IBASUSA2,KEY14;;                                            
          RETURN
.
RAIBSUS2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      IBASUSA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBSUS2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      IBASUSA2,KEY14;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBSUS2  MOVE      ZERO,OVRCD
          READKS    IBASUSA2;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBSUS2  MOVE      ZERO,OVRCD
          READKP    IBASUSA2;IBSUMNTH,IBSUPROG,IBSUNUMB,IBSUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
...............................................................................
