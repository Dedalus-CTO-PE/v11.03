.
. CCSDALIO    
. --------
. Filename     : ccsdalaf.dat
.
RSCCDA1   RESET     KEY14                                                       
          READ      CCSDALA1,KEY14;;                                            
          RETURN
.
RACCDA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDALA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDALA1,KEY14;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDALA1;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDALA1;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDA1                                                                         
          UPDATE    CCSDALA1;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          RETURN
.
WRCCDA1   RESET     KEY14                                                       
          WRITE     CCSDALA1,KEY14;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA      
          RETURN
.
DECCDA1   RESET     KEY14                                                       
          DELETE    CCSDALA1,KEY14                                              
          RETURN
.
RSCCDA2   RESET     KEY14                                                       
          READ      CCSDALA2,KEY14;;                                            
          RETURN
.
RACCDA2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDALA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDA2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDALA2,KEY14;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDALA2;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDALA2;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDA2                                                                         
          UPDATE    CCSDALA2;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA            
          RETURN
.
WRCCDA2   RESET     KEY14                                                       
          WRITE     CCSDALA2,KEY14;CCDAHCD,CCDADPT,CCDACTY,CCDAATY,CCDASPA      
          RETURN
.
DECCDA2   RESET     KEY14                                                       
          DELETE    CCSDALA2,KEY14                                              
          RETURN
.
