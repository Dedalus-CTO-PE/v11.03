.
. CCSGNCIO    
. --------
. Filename     : ccsgncaf.dat
.
RSCCGN1   RESET     KEY10                                                       
          READ      CCSGNCA1,KEY10;;                                            
          RETURN
.
RACCGN1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGNCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGN1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGNCA1,KEY10;CCGNHCD,CCGNGPC,CCGNDES,CCGNSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGNCA1;CCGNHCD,CCGNGPC,CCGNDES,CCGNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGNCA1;CCGNHCD,CCGNGPC,CCGNDES,CCGNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGN1                                                                         
          UPDATE    CCSGNCA1;CCGNHCD,CCGNGPC,CCGNDES,CCGNSPA                    
          RETURN
.
WRCCGN1   RESET     KEY10                                                       
          WRITE     CCSGNCA1,KEY10;CCGNHCD,CCGNGPC,CCGNDES,CCGNSPA              
          RETURN
.
DECCGN1   RESET     KEY10                                                       
          DELETE    CCSGNCA1,KEY10                                              
          RETURN
.
