.
. CCSIMCIO    
. --------
. Filename     : ccsimcaf.dat
.
RSCCIM1   RESET     KEY10                                                       
          READ      CCSIMCA1,KEY10;;                                            
          RETURN
.
RACCIM1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSIMCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCIM1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSIMCA1,KEY10;CCIMTYP,CCIMCOD,CCIMITY,CCIMSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCIM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSIMCA1;CCIMTYP,CCIMCOD,CCIMITY,CCIMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCIM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSIMCA1;CCIMTYP,CCIMCOD,CCIMITY,CCIMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCIM1                                                                         
          UPDATE    CCSIMCA1;CCIMTYP,CCIMCOD,CCIMITY,CCIMSPA                    
          RETURN
.
WRCCIM1   RESET     KEY10                                                       
          WRITE     CCSIMCA1,KEY10;CCIMTYP,CCIMCOD,CCIMITY,CCIMSPA              
          RETURN
.
DECCIM1   RESET     KEY10                                                       
          DELETE    CCSIMCA1,KEY10                                              
          RETURN
.
