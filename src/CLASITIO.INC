.
. CLASITIO    
. --------
. Filename     : clasitaf.dat
.
RSCASIT1  RESET     KEY6                                                        
          READ      CLASITA1,KEY6;;                                             
          RETURN
.
RACASIT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CLASITA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCASIT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CLASITA1,KEY6;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE: 
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCASIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLASITA1;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCASIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLASITA1;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCASIT1                                                                        
          UPDATE    CLASITA1;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          RETURN
.
WRCASIT1  RESET     KEY6                                                        
          WRITE     CLASITA1,KEY6;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE: 
                        CASTSCRN,CASTSPAR                                       
          RETURN
.
DECASIT1  RESET     KEY6                                                        
          DELETE    CLASITA1,KEY6                                               
          RETURN
.
RSCASIT2  RESET     KEY36                                                       
          READ      CLASITA2,KEY36;;                                            
          RETURN
.
RACASIT2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      CLASITA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCASIT2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      CLASITA2,KEY36;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCASIT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLASITA2;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCASIT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLASITA2;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCASIT2                                                                        
          UPDATE    CLASITA2;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:      
                        CASTSCRN,CASTSPAR                                       
          RETURN
.
WRCASIT2  RESET     KEY36                                                       
          WRITE     CLASITA2,KEY36;CASTSITE,CASTDESC,CASTPASS,CASTFILE,CASTTYPE:
                        CASTSCRN,CASTSPAR                                       
          RETURN
.
DECASIT2  RESET     KEY36                                                       
          DELETE    CLASITA2,KEY36                                              
          RETURN
.
