.
. RESPDSIO    
. --------
. Filename     : respdsaf.dat
.
RSREPD1   RESET     KEY20                                                       
          READ      RESPDSA1,KEY20;;                                            
          RETURN
.
RAREPD1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESPDSA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPD1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESPDSA1,KEY20;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPDSA1;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPDSA1;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPD1                                                                         
          UPDATE    RESPDSA1;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPD1   RESET     KEY20                                                       
          WRITE     RESPDSA1,KEY20;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          RETURN
.
DEREPD1   RESET     KEY20                                                       
          DELETE    RESPDSA1,KEY20                                              
          RETURN
.
RLREPD1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     RESPDSA1,KEY20;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPDSA1;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPDSA1;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPD1   RESET     KEY20                                                       
          UNLOCK    RESPDSA1                                                    
          RETURN
.
RSREPD2   RESET     KEY23                                                       
          READ      RESPDSA2,KEY23;;                                            
          RETURN
.
RAREPD2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RESPDSA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPD2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RESPDSA2,KEY23;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPDSA2;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPDSA2;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPD2                                                                         
          UPDATE    RESPDSA2;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPD2   RESET     KEY23                                                       
          WRITE     RESPDSA2,KEY23;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          RETURN
.
DEREPD2   RESET     KEY23                                                       
          DELETE    RESPDSA2,KEY23                                              
          RETURN
.
RLREPD2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     RESPDSA2,KEY23;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:     
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPD2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPDSA2;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPD2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPDSA2;REPDRDT,REPDRTM,REPDRUN,REPDLIN,REPDTXT:           
                        REPDPTL,REPDSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPD2   RESET     KEY23                                                       
          UNLOCK    RESPDSA2                                                    
          RETURN
.
