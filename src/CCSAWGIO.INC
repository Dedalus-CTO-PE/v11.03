.
. CCSAWGIO    
. --------
. Filename     : ccsawgaf.dat
.
RSCCAW1   RESET     KEY14                                                       
          READ      CCSAWGA1,KEY14;;                                            
          RETURN
.
RACCAW1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAWGA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAW1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAWGA1,KEY14;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAW1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAWGA1;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAW1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAWGA1;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAW1                                                                         
          UPDATE    CCSAWGA1;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          RETURN
.
WRCCAW1   RESET     KEY14                                                       
          WRITE     CCSAWGA1,KEY14;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA      
          RETURN
.
DECCAW1   RESET     KEY14                                                       
          DELETE    CCSAWGA1,KEY14                                              
          RETURN
.
RSCCAW2   RESET     KEY14                                                       
          READ      CCSAWGA2,KEY14;;                                            
          RETURN
.
RACCAW2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAWGA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAW2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAWGA2,KEY14;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAW2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAWGA2;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAW2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAWGA2;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAW2                                                                         
          UPDATE    CCSAWGA2;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA            
          RETURN
.
WRCCAW2   RESET     KEY14                                                       
          WRITE     CCSAWGA2,KEY14;CCAWHCD,CCAWDPT,CCAWATY,CCAWQTY,CCAWSPA      
          RETURN
.
DECCAW2   RESET     KEY14                                                       
          DELETE    CCSAWGA2,KEY14                                              
          RETURN
.
