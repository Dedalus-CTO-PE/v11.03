.
. WEBERHIO    
. --------
. Filename     : weberhaf.dat
.
RSWBERH1  RESET     KEY61                                                       
          READ      WEBERHA1,KEY61;;                                            
          RETURN
.
RAWBERH1  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA1,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERH1  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA1,KEY61;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERHA1;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERHA1;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERHA1;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          RETURN
.
WRWBERH1  RESET     KEY61                                                       
          WRITE     WEBERHA1,KEY61;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          RETURN
.
DEWBERH1  RESET     KEY61                                                       
          DELETE    WEBERHA1,KEY61                                              
          RETURN
.
RSWBERH2  RESET     KEY69                                                       
          READ      WEBERHA2,KEY69;;                                            
          RETURN
.
RAWBERH2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA2,KEY69;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERH2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA2,KEY69;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERHA2;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERHA2;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERHA2;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          RETURN
.
WRWBERH2  RESET     KEY69                                                       
          WRITE     WEBERHA2,KEY69;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          RETURN
.
DEWBERH2  RESET     KEY69                                                       
          DELETE    WEBERHA2,KEY69                                              
          RETURN
.
RSWBERH3  RESET     KEY70                                                       
          READ      WEBERHA3,KEY70;;                                            
          RETURN
.
RAWBERH3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA3,KEY70;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERH3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA3,KEY70;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERHA3;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERHA3;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERHA3;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          RETURN
.
WRWBERH3  RESET     KEY70                                                       
          WRITE     WEBERHA3,KEY70;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          RETURN
.
DEWBERH3  RESET     KEY70                                                       
          DELETE    WEBERHA3,KEY70                                              
          RETURN
.
RSWBERH4  RESET     KEY61                                                       
          READ      WEBERHA4,KEY61;;                                            
          RETURN
.
RAWBERH4  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA4,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERH4  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERHA4,KEY61;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERH4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERHA4;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERH4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERHA4;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERHA4;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:      
                             WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:      
                             WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:      
                             WBEIRSTA,WBEISPAR                                  
          RETURN
.
WRWBERH4  RESET     KEY61                                                       
          WRITE     WEBERHA4,KEY61;WBEIHOSP,WBEIFTID,WBEIRADV,WBEIPNUM,WBEIPTOT:
                                   WBEIDATE,WBEINAME,WBEIPLID,WBEIBNUM,WBEIBNAM:
                                   WBEIBBSB,WBEIPREF,WBEIDAMT,WBEISTAT,WBEIMSID:
                                   WBEIRSTA,WBEISPAR                            
          RETURN
.
DEWBERH4  RESET     KEY61                                                       
          DELETE    WEBERHA4,KEY61                                              
          RETURN
.
