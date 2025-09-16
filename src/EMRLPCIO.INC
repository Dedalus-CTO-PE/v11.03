.
. EMRLPCIO    
. --------
. Filename     : emrlpcaf.dat
.
RSEMLP1   RESET     KEY5                                                        
          READ      EMRLPCA1,KEY5;;                                             
          RETURN
.
RAEMLP1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRLPCA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLP1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRLPCA1,KEY5;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:      
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRLPCA1;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:           
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRLPCA1;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:           
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLP1                                                                         
          UPDATE    EMRLPCA1;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:           
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMLP1   RESET     KEY5                                                        
          WRITE     EMRLPCA1,KEY5;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:      
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          RETURN
.
DEEMLP1   RESET     KEY5                                                        
          DELETE    EMRLPCA1,KEY5                                               
          RETURN
.
RLEMLP1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     EMRLPCA1,KEY5;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:      
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMLP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRLPCA1;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:           
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMLP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRLPCA1;EMLPUNI,EMLPADM,EMLPURN,EMLPLPN,EMLPCNO:           
                        EMLPSTC,EMLPREP,EMLPLTY,EMLPFPN,EMLPPSC,EMLPSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMLP1   RESET     KEY5                                                        
          UNLOCK    EMRLPCA1                                                    
          RETURN
.
