.
. OUTSRVIO    
. --------
. Filename     : outsrvaf.dat
.
RSOTSRV1  RESET     KEY28                                                       
          READ      OUTSRVA1,KEY28;;                                            
          RETURN
.
RAOTSRV1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTSRVA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTSRV1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTSRVA1,KEY28;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTSRV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTSRVA1;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTSRV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTSRVA1;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTSRV1                                                                        
          UPDATE    OUTSRVA1;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTSRV1  RESET     KEY28                                                       
          WRITE     OUTSRVA1,KEY28;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          RETURN
.
DEOTSRV1  RESET     KEY28                                                       
          DELETE    OUTSRVA1,KEY28                                              
          RETURN
.
RLOTSRV1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     OUTSRVA1,KEY28;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTSRV1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTSRVA1;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTSRV1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTSRVA1;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTSRV1  RESET     KEY28                                                       
          UNLOCK    OUTSRVA1                                                    
          RETURN
.
RSOTSRV2  RESET     KEY41                                                       
          READ      OUTSRVA2,KEY41;;                                            
          RETURN
.
RAOTSRV2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      OUTSRVA2,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTSRV2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      OUTSRVA2,KEY41;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTSRV2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTSRVA2;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTSRV2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTSRVA2;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTSRV2                                                                        
          UPDATE    OUTSRVA2;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTSRV2  RESET     KEY41                                                       
          WRITE     OUTSRVA2,KEY41;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          RETURN
.
DEOTSRV2  RESET     KEY41                                                       
          DELETE    OUTSRVA2,KEY41                                              
          RETURN
.
RLOTSRV2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READL     OUTSRVA2,KEY41;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTSRV2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTSRVA2;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTSRV2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTSRVA2;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:      
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTSRV2  RESET     KEY41                                                       
          UNLOCK    OUTSRVA2                                                    
          RETURN
.
RSOTSRV3  RESET     KEY38
          READ      OUTSRVA3,KEY38;;
          RETURN
.
RAOTSRV3  RESET     KEY38
          MOVE      ZERO,OVRCD
          READ      OUTSRVA3,KEY38;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTSRV3  RESET     KEY38
          MOVE      ZERO,OVRCD
          READ      OUTSRVA3,KEY38;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTSRV3
          MOVE      ZERO,OVRCD
          READKS    OUTSRVA3;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTSRV3
          MOVE      ZERO,OVRCD
          READKP    OUTSRVA3;OTSRSITE,OTSRCLIN,OTSRSDAT,OTSRSTIM,OTSRSLOT:
                        OTSREDAT,OTSRETIM,OTSRWEBU,OTSRRDAT,OTSRRTIM,OTSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
