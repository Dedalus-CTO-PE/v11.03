.
. CCSGCRIO    
. --------
. Filename     : ccsgcraf.dat
.
RSCCGC1   RESET     KEY18                                                       
          READ      CCSGCRA1,KEY18;;                                            
          RETURN
.
RACCGC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGCRA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGCRA1,KEY18;CCGCHCD,CCGCDPT,CCGCGCD,CCGCCTY,CCGCRVI:     
                        CCGCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGCRA1;CCGCHCD,CCGCDPT,CCGCGCD,CCGCCTY,CCGCRVI:           
                        CCGCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGCRA1;CCGCHCD,CCGCDPT,CCGCGCD,CCGCCTY,CCGCRVI:           
                        CCGCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGC1                                                                         
          UPDATE    CCSGCRA1;CCGCHCD,CCGCDPT,CCGCGCD,CCGCCTY,CCGCRVI:           
                        CCGCSPA                                                 
          RETURN
.
WRCCGC1   RESET     KEY18                                                       
          WRITE     CCSGCRA1,KEY18;CCGCHCD,CCGCDPT,CCGCGCD,CCGCCTY,CCGCRVI:     
                        CCGCSPA                                                 
          RETURN
.
DECCGC1   RESET     KEY18                                                       
          DELETE    CCSGCRA1,KEY18                                              
          RETURN
.
