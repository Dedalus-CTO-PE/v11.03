.
. SCRINCIO    
. --------
. Filename     : scrincaf.dat
.
RSSCIN1   RESET     KEY21                                                       
          READ      SCRINCA1,KEY21;;                                            
          RETURN
.
RASCIN1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SCRINCA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCIN1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SCRINCA1,KEY21;SCINPID,SCINTYP,SCININC,SCINGEN,SCINSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCIN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRINCA1;SCINPID,SCINTYP,SCININC,SCINGEN,SCINSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCIN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRINCA1;SCINPID,SCINTYP,SCININC,SCINGEN,SCINSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCIN1                                                                         
          UPDATE    SCRINCA1;SCINPID,SCINTYP,SCININC,SCINGEN,SCINSPA            
          RETURN
.
WRSCIN1   RESET     KEY21                                                       
          WRITE     SCRINCA1,KEY21;SCINPID,SCINTYP,SCININC,SCINGEN,SCINSPA      
          RETURN
.
DESCIN1   RESET     KEY21                                                       
          DELETE    SCRINCA1,KEY21                                              
          RETURN
.
