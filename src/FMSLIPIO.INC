.
. FMSLIPIO    
. --------
. Filename     : fmslipaf.dat
.
RSFMLI1   RESET     KEY5                                                        
          READ      FMSLIPA1,KEY5;;                                             
          RETURN
.
RAFMLI1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      FMSLIPA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMLI1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      FMSLIPA1,KEY5;FMLICODE,FMLILEDG,FMLIDESC,FMLIREF,FMLIDISS:  
                        FMLIRESP,FMLICRAC,FMLICRAA,FMLISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMLI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSLIPA1;FMLICODE,FMLILEDG,FMLIDESC,FMLIREF,FMLIDISS:       
                        FMLIRESP,FMLICRAC,FMLICRAA,FMLISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMLI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSLIPA1;FMLICODE,FMLILEDG,FMLIDESC,FMLIREF,FMLIDISS:       
                        FMLIRESP,FMLICRAC,FMLICRAA,FMLISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMLI1                                                                         
          UPDATE    FMSLIPA1;FMLICODE,FMLILEDG,FMLIDESC,FMLIREF,FMLIDISS:       
                        FMLIRESP,FMLICRAC,FMLICRAA,FMLISPAR                     
          RETURN
.
WRFMLI1   RESET     KEY5                                                        
          WRITE     FMSLIPA1,KEY5;FMLICODE,FMLILEDG,FMLIDESC,FMLIREF,FMLIDISS:  
                        FMLIRESP,FMLICRAC,FMLICRAA,FMLISPAR                     
          RETURN
.
DEFMLI1   RESET     KEY5                                                        
          DELETE    FMSLIPA1,KEY5                                               
          RETURN
.
