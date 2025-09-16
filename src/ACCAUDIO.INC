.
. ACCAUDIO    
. --------
. Filename     : accaudaf.dat
.
RSACAUD1  RESET     KEY54                                                       
          READ      ACCAUDA1,KEY54;;                                            
          RETURN
.
RAACAUD1  RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      ACCAUDA1,KEY54;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDACAUD1  RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      ACCAUDA1,KEY54;ACAUCLMN,ACAUADMN,ACAUDATE,ACAUTIME,ACAUWUID:
                                   ACAUAUTY,ACAUTREC,ACAUDIGC,ACAUDIGV,ACAUDIGS:
                                   ACAURPTY,ACAUSATC,ACAUOACC,ACAUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKACAUD1  MOVE      ZERO,OVRCD                                                  
          READKS    ACCAUDA1;ACAUCLMN,ACAUADMN,ACAUDATE,ACAUTIME,ACAUWUID:      
                             ACAUAUTY,ACAUTREC,ACAUDIGC,ACAUDIGV,ACAUDIGS:      
                             ACAURPTY,ACAUSATC,ACAUOACC,ACAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPACAUD1  MOVE      ZERO,OVRCD                                                  
          READKP    ACCAUDA1;ACAUCLMN,ACAUADMN,ACAUDATE,ACAUTIME,ACAUWUID:      
                             ACAUAUTY,ACAUTREC,ACAUDIGC,ACAUDIGV,ACAUDIGS:      
                             ACAURPTY,ACAUSATC,ACAUOACC,ACAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPACAUD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ACCAUDA1;ACAUCLMN,ACAUADMN,ACAUDATE,ACAUTIME,ACAUWUID:      
                             ACAUAUTY,ACAUTREC,ACAUDIGC,ACAUDIGV,ACAUDIGS:      
                             ACAURPTY,ACAUSATC,ACAUOACC,ACAUSPAR                
          RETURN
.
WRACAUD1  RESET     KEY54                                                       
          WRITE     ACCAUDA1,KEY54;ACAUCLMN,ACAUADMN,ACAUDATE,ACAUTIME,ACAUWUID:
                                   ACAUAUTY,ACAUTREC,ACAUDIGC,ACAUDIGV,ACAUDIGS:
                                   ACAURPTY,ACAUSATC,ACAUOACC,ACAUSPAR          
          RETURN
.
DEACAUD1  RESET     KEY54                                                       
          DELETE    ACCAUDA1,KEY54                                              
          RETURN
.
