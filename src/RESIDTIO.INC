.
. RESIDTIO    
. --------
. Filename     : residtaf.dat
.
RSREIDT1  RESET     KEY6                                                        
          READ      RESIDTA1,KEY6;;                                             
          RETURN
.
RAREIDT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      RESIDTA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREIDT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      RESIDTA1,KEY6;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY: 
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREIDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    RESIDTA1;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREIDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    RESIDTA1;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREIDT1                                                                        
          UPDATE    RESIDTA1;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
WRREIDT1  RESET     KEY6                                                        
          WRITE     RESIDTA1,KEY6;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY: 
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
DEREIDT1  RESET     KEY6                                                        
          DELETE    RESIDTA1,KEY6                                               
          RETURN
.
RSREIDT2  RESET     KEY18                                                       
          READ      RESIDTA2,KEY18;;                                            
          RETURN
.
RAREIDT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      RESIDTA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREIDT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      RESIDTA2,KEY18;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREIDT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    RESIDTA2;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREIDT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    RESIDTA2;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREIDT2                                                                        
          UPDATE    RESIDTA2;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
WRREIDT2  RESET     KEY18                                                       
          WRITE     RESIDTA2,KEY18;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
DEREIDT2  RESET     KEY18                                                       
          DELETE    RESIDTA2,KEY18                                              
          RETURN
.
RSREIDT3  RESET     KEY56                                                       
          READ      RESIDTA3,KEY56;;                                            
          RETURN
.
RAREIDT3  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      RESIDTA3,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREIDT3  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      RESIDTA3,KEY56;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREIDT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    RESIDTA3;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREIDT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    RESIDTA3;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREIDT3                                                                        
          UPDATE    RESIDTA3;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:      
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
WRREIDT3  RESET     KEY56                                                       
          WRITE     RESIDTA3,KEY56;REIDRTYP,REIDIORD,REIDITEM,REIDIDES,REIDRITY:
                        REIDRRAN,REIDRRTY,REIDLRRM,REIDHRRM,REIDLRRF,REIDHRRF:  
                        REIDRRDE,REIDUMEA,REIDWEBC,REIDDATC,REIDTIMC,REIDWEBU:  
                        REIDDATU,REIDTIMU,REIDSPAR                              
          RETURN
.
DEREIDT3  RESET     KEY56                                                       
          DELETE    RESIDTA3,KEY56                                              
          RETURN
.
