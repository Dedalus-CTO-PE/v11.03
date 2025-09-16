.
. EMRACPIO    
. --------
. Filename     : emracpaf.dat
.
RSEMACP1  RESET     KEY38                                                       
          READ      EMRACPA1,KEY38;;                                            
          RETURN
.
RAEMACP1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACPA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACP1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACPA1,KEY38;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:
                                   EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:
                                   EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:
                                   EMAPUUID,EMAPAFLG,EMAPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMACP1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACPA1;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:      
                             EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:      
                             EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:      
                             EMAPUUID,EMAPAFLG,EMAPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMACP1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACPA1;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:      
                             EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:      
                             EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:      
                             EMAPUUID,EMAPAFLG,EMAPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMACP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRACPA1;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:      
                             EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:      
                             EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:      
                             EMAPUUID,EMAPAFLG,EMAPSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACP1  RESET     KEY38                                                       
          WRITE     EMRACPA1,KEY38;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:
                                   EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:
                                   EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:
                                   EMAPUUID,EMAPAFLG,EMAPSPAR                   
          RETURN
.
DEEMACP1  RESET     KEY38                                                       
          DELETE    EMRACPA1,KEY38                                              
          RETURN
.
RLEMACP1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACPA1,KEY38;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:
                                   EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:
                                   EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:
                                   EMAPUUID,EMAPAFLG,EMAPSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMACP1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACPA1;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:      
                             EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:      
                             EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:      
                             EMAPUUID,EMAPAFLG,EMAPSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMACP1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACPA1;EMAPCODE,EMAPFDAT,EMAPTDAT,EMAPAGE1,EMAPAGE2:      
                             EMAPTCT1,EMAPTCT2,EMAPTCT3,EMAPTCT4,EMAPTCT5:      
                             EMAPCDAT,EMAPCTIM,EMAPCUID,EMAPUDAT,EMAPUTIM:      
                             EMAPUUID,EMAPAFLG,EMAPSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMACP1  RESET     KEY38                                                       
          UNLOCK    EMRACPA1                                                    
          RETURN
.
