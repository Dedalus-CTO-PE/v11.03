.
. SCRTAGIO    
. --------
. Filename     : scrtagaf.dat
.
RSSCTA1   RESET     KEY15                                                       
          READ      SCRTAGA1,KEY15;;                                            
          RETURN
.
RASCTA1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRTAGA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCTA1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRTAGA1,KEY15;SCTAPID,SCTASID,SCTAFNO,SCTACBD,SCTACAD:     
                        SCTACBK,SCTACAK,SCTASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCTA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRTAGA1;SCTAPID,SCTASID,SCTAFNO,SCTACBD,SCTACAD:           
                        SCTACBK,SCTACAK,SCTASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCTA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRTAGA1;SCTAPID,SCTASID,SCTAFNO,SCTACBD,SCTACAD:           
                        SCTACBK,SCTACAK,SCTASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCTA1                                                                         
          UPDATE    SCRTAGA1;SCTAPID,SCTASID,SCTAFNO,SCTACBD,SCTACAD:           
                        SCTACBK,SCTACAK,SCTASPA                                 
          RETURN
.
WRSCTA1   RESET     KEY15                                                       
          WRITE     SCRTAGA1,KEY15;SCTAPID,SCTASID,SCTAFNO,SCTACBD,SCTACAD:     
                        SCTACBK,SCTACAK,SCTASPA                                 
          RETURN
.
DESCTA1   RESET     KEY15                                                       
          DELETE    SCRTAGA1,KEY15                                              
          RETURN
.
