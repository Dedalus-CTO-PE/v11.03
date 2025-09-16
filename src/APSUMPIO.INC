.
. APSUMPIO    
. --------
. Filename     : apsumpaf.dat
.
RSAPUM1   RESET     KEY25                                                       
          READ      APSUMPA1,KEY25;;                                            
          RETURN
.
RAAPUM1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      APSUMPA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPUM1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      APSUMPA1,KEY25;APUMBCH,APUMCRD,APUMDOC,APUMAIN,APUMSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPUM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSUMPA1;APUMBCH,APUMCRD,APUMDOC,APUMAIN,APUMSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPUM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSUMPA1;APUMBCH,APUMCRD,APUMDOC,APUMAIN,APUMSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPUM1                                                                         
          UPDATE    APSUMPA1;APUMBCH,APUMCRD,APUMDOC,APUMAIN,APUMSPA            
          RETURN
.
WRAPUM1   RESET     KEY25                                                       
          WRITE     APSUMPA1,KEY25;APUMBCH,APUMCRD,APUMDOC,APUMAIN,APUMSPA      
          RETURN
.
DEAPUM1   RESET     KEY25                                                       
          DELETE    APSUMPA1,KEY25                                              
          RETURN
.
