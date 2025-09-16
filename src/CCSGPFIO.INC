.
. CCSGPFIO    
. --------
. Filename     : ccsgpfaf.dat
.
RSCCGP1   RESET     KEY36                                                       
          READ      CCSGPFA1,KEY36;;                                            
          RETURN
.
RACCGP1   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGPFA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGP1   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGPFA1,KEY36;CCGPHCD,CCGPDPT,CCGPPCD,CCGPGHCD,CCGPGDPT:   
                        CCGPGPCD,CCGPGQTY,CCGPGCH,CCGPSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGPFA1;CCGPHCD,CCGPDPT,CCGPPCD,CCGPGHCD,CCGPGDPT:         
                        CCGPGPCD,CCGPGQTY,CCGPGCH,CCGPSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGPFA1;CCGPHCD,CCGPDPT,CCGPPCD,CCGPGHCD,CCGPGDPT:         
                        CCGPGPCD,CCGPGQTY,CCGPGCH,CCGPSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGP1                                                                         
          UPDATE    CCSGPFA1;CCGPHCD,CCGPDPT,CCGPPCD,CCGPGHCD,CCGPGDPT:         
                        CCGPGPCD,CCGPGQTY,CCGPGCH,CCGPSPA                       
          RETURN
.
WRCCGP1   RESET     KEY36                                                       
          WRITE     CCSGPFA1,KEY36;CCGPHCD,CCGPDPT,CCGPPCD,CCGPGHCD,CCGPGDPT:   
                        CCGPGPCD,CCGPGQTY,CCGPGCH,CCGPSPA                       
          RETURN
.
DECCGP1   RESET     KEY36                                                       
          DELETE    CCSGPFA1,KEY36                                              
          RETURN
.
