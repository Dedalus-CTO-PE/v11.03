.
. FMSDISIO    
. --------
. Filename     : fmsdisaf.dat
.
RSFMDS1   RESET     KEY5                                                        
          READ      FMSDISA1,KEY5;;                                             
          RETURN
.
RAFMDS1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      FMSDISA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMDS1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      FMSDISA1,KEY5;FMDSCODE,FMDSDESC,FMDSSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMDS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSDISA1;FMDSCODE,FMDSDESC,FMDSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMDS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSDISA1;FMDSCODE,FMDSDESC,FMDSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMDS1                                                                         
          UPDATE    FMSDISA1;FMDSCODE,FMDSDESC,FMDSSPAR                         
          RETURN
.
WRFMDS1   RESET     KEY5                                                        
          WRITE     FMSDISA1,KEY5;FMDSCODE,FMDSDESC,FMDSSPAR                    
          RETURN
.
DEFMDS1   RESET     KEY5                                                        
          DELETE    FMSDISA1,KEY5                                               
          RETURN
.
