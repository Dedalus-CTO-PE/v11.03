.
. CCSGILIO    
. --------
. Filename     : ccsgilaf.dat
.
RSCCGI1   RESET     KEY34                                                       
          READ      CCSGILA1,KEY34;;                                            
          RETURN
.
RACCGI1   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGILA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGI1   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGILA1,KEY34;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:     
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGILA1;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGILA1;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGI1                                                                         
          UPDATE    CCSGILA1;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          RETURN
.
WRCCGI1   RESET     KEY34                                                       
          WRITE     CCSGILA1,KEY34;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:     
                        CCGISPA                                                 
          RETURN
.
DECCGI1   RESET     KEY34                                                       
          DELETE    CCSGILA1,KEY34                                              
          RETURN
.
RSCCGI2   RESET     KEY34                                                       
          READ      CCSGILA2,KEY34;;                                            
          RETURN
.
RACCGI2   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGILA2,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGI2   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGILA2,KEY34;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:     
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGILA2;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGILA2;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGI2                                                                         
          UPDATE    CCSGILA2;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:           
                        CCGISPA                                                 
          RETURN
.
WRCCGI2   RESET     KEY34                                                       
          WRITE     CCSGILA2,KEY34;CCGIKEY,CCGIHCD,CCGIDPT,CCGICTY,CCGIPER:     
                        CCGISPA                                                 
          RETURN
.
DECCGI2   RESET     KEY34                                                       
          DELETE    CCSGILA2,KEY34                                              
          RETURN
.
