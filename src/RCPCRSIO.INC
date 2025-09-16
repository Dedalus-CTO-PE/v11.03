.
. RCPCRSIO    
. --------
. Filename     : rcpcrsaf.dat
.
RSRCCRS1  RESET     KEY15                                                       
          READ      RCPCRSA1,KEY15;;                                            
          RETURN
.
RARCCRS1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      RCPCRSA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCCRS1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      RCPCRSA1,KEY15;RCCRRECN,RCCRUNIQ,RCCRCRTY,RCCRACCN,RCCRSAMN:
                        RCCRSGST,RCCRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCCRS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    RCPCRSA1;RCCRRECN,RCCRUNIQ,RCCRCRTY,RCCRACCN,RCCRSAMN:      
                        RCCRSGST,RCCRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCCRS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    RCPCRSA1;RCCRRECN,RCCRUNIQ,RCCRCRTY,RCCRACCN,RCCRSAMN:      
                        RCCRSGST,RCCRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCCRS1                                                                        
          UPDATE    RCPCRSA1;RCCRRECN,RCCRUNIQ,RCCRCRTY,RCCRACCN,RCCRSAMN:      
                        RCCRSGST,RCCRSPAR                                       
          RETURN
.
WRRCCRS1  RESET     KEY15                                                       
          WRITE     RCPCRSA1,KEY15;RCCRRECN,RCCRUNIQ,RCCRCRTY,RCCRACCN,RCCRSAMN:
                        RCCRSGST,RCCRSPAR                                       
          RETURN
.
DERCCRS1  RESET     KEY15                                                       
          DELETE    RCPCRSA1,KEY15                                              
          RETURN
.
