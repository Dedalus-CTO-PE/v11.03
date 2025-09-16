.
. IBATMHIO    
. --------
. Filename     : ibatmhaf.dat
.
RSIBTH1   RESET     KEY6                                                        
          READ      IBATMHA1,KEY6;;                                             
          RETURN
.
RAIBTH1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBATMHA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBTH1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBATMHA1,KEY6;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                                  IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                                  IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RKIBTH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBATMHA1;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RPIBTH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBATMHA1;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UPIBTH1                                                                         
          MOVE      IBTHSTFM,IBTHSTYP
          UPDATE    IBATMHA1;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBTH1   RESET     KEY6                                                        
          MOVE      IBTHSTFM,IBTHSTYP
          WRITE     IBATMHA1,KEY6;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          RETURN
.
DEIBTH1   RESET     KEY6                                                        
          DELETE    IBATMHA1,KEY6                                               
          RETURN
.
RLIBTH1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     IBATMHA1,KEY6;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
KLIBTH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBATMHA1;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
PLIBTH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBATMHA1;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UUIBTH1   RESET     KEY6                                                        
          UNLOCK    IBATMHA1                                                    
          RETURN
.
RSIBTH2   RESET     KEY9                                                        
          READ      IBATMHA2,KEY9;;                                             
          RETURN
.
RAIBTH2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBATMHA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBTH2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBATMHA2,KEY9;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RKIBTH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBATMHA2;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RPIBTH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBATMHA2;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UPIBTH2                                                                         
          MOVE      IBTHSTFM,IBTHSTYP
          UPDATE    IBATMHA2;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBTH2   RESET     KEY9                                                        
          MOVE      IBTHSTFM,IBTHSTYP
          WRITE     IBATMHA2,KEY9;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          RETURN
.
DEIBTH2   RESET     KEY9                                                        
          DELETE    IBATMHA2,KEY9                                               
          RETURN
.
RLIBTH2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     IBATMHA2,KEY9;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP: 
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
KLIBTH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBATMHA2;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
PLIBTH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBATMHA2;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UUIBTH2   RESET     KEY9                                                        
          UNLOCK    IBATMHA2                                                    
          RETURN
.
RSIBTH3   RESET     KEY36
          READ      IBATMHA3,KEY36;;
          RETURN
.
RAIBTH3   RESET     KEY36
          MOVE      ZERO,OVRCD
          READ      IBATMHA3,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBTH3   RESET     KEY36
          MOVE      ZERO,OVRCD
          READ      IBATMHA3,KEY36;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RKIBTH3   MOVE      ZERO,OVRCD
          READKS    IBATMHA3;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
RPIBTH3   MOVE      ZERO,OVRCD
          READKP    IBATMHA3;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UPIBTH3   MOVE      IBTHSTFM,IBTHSTYP
          UPDATE    IBATMHA3;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBTH3   RESET     KEY36
          MOVE      IBTHSTFM,IBTHSTYP
          WRITE     IBATMHA3,KEY36;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          RETURN
.
DEIBTH3   RESET     KEY36
          DELETE    IBATMHA3,KEY36
          RETURN
.
RLIBTH3   RESET     KEY36
          MOVE      ZERO,OVRCD
          READL     IBATMHA3,KEY36;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
KLIBTH3   MOVE      ZERO,OVRCD
          READLKS   IBATMHA3;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
PLIBTH3   MOVE      ZERO,OVRCD
          READLKP   IBATMHA3;IBTHSCOD,IBTHDESC,IBTHWIDT,IBTHLENG,IBTHSTYP:      
                             IBTHACTV,IBTHCOMM,IBTHCUID,IBTHCDAT,IBTHCTIM:
                             IBTHUUID,IBTHUDAT,IBTHUTIM,IBTHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      IBTHSTYP,IBTHSTFM
          RETURN
.
UUIBTH3   RESET     KEY36
          UNLOCK    IBATMHA3
          RETURN
.
