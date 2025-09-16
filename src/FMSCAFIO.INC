.
. FMSCAFIO    
. --------
. Filename     : fmscafaf.dat
.
RSFMCA1   RESET     KEY14                                                       
          READ      FMSCAFA1,KEY14;;                                            
          RETURN
.
RAFMCA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCAFA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMCA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCAFA1,KEY14;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:     
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMCA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSCAFA1;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMCA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSCAFA1;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMCA1                                                                         
          UPDATE    FMSCAFA1;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          RETURN
.
WRFMCA1   RESET     KEY14                                                       
          WRITE     FMSCAFA1,KEY14;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:     
                        FMCASPA                                                 
          RETURN
.
DEFMCA1   RESET     KEY14                                                       
          DELETE    FMSCAFA1,KEY14                                              
          RETURN
.
RSFMCA2   RESET     KEY29                                                       
          READ      FMSCAFA2,KEY29;;                                            
          RETURN
.
RAFMCA2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCAFA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMCA2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCAFA2,KEY29;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:     
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMCA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSCAFA2;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMCA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSCAFA2;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMCA2                                                                         
          UPDATE    FMSCAFA2;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:           
                        FMCASPA                                                 
          RETURN
.
WRFMCA2   RESET     KEY29                                                       
          WRITE     FMSCAFA2,KEY29;FMCALED,FMCAACC,FMCATYP,FMCAJNL,FMCACHQ:     
                        FMCASPA                                                 
          RETURN
.
DEFMCA2   RESET     KEY29                                                       
          DELETE    FMSCAFA2,KEY29                                              
          RETURN
.
