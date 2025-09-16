.
. ALLLNKIO    
. --------
. Filename     : alllnkaf.dat
.
RSALLNK1  RESET     KEY16                                                       
          READ      ALLLNKA1,KEY16;;                                            
          RETURN
.
RAALLNK1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLNK1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA1,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLNK1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLNKA1;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLNK1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLNKA1;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLNK1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLNKA1;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLNK1  RESET     KEY16                                                       
          WRITE     ALLLNKA1,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          RETURN
.
DEALLNK1  RESET     KEY16                                                       
          DELETE    ALLLNKA1,KEY16                                              
          RETURN
.
RLALLNK1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLNKA1,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLNK1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLNKA1;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLNK1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLNKA1;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLNK1  RESET     KEY16                                                       
          UNLOCK    ALLLNKA1                                                    
          RETURN
.
RSALLNK2  RESET     KEY16                                                       
          READ      ALLLNKA2,KEY16;;                                            
          RETURN
.
RAALLNK2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLNK2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA2,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLNK2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLNKA2;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLNK2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLNKA2;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLNK2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLNKA2;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLNK2  RESET     KEY16                                                       
          WRITE     ALLLNKA2,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          RETURN
.
DEALLNK2  RESET     KEY16                                                       
          DELETE    ALLLNKA2,KEY16                                              
          RETURN
.
RLALLNK2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLNKA2,KEY16;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLNK2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLNKA2;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLNK2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLNKA2;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLNK2  RESET     KEY16                                                       
          UNLOCK    ALLLNKA2                                                    
          RETURN
.
RSALLNK3  RESET     KEY24                                                       
          READ      ALLLNKA3,KEY24;;                                            
          RETURN
.
RAALLNK3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLNK3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLNKA3,KEY24;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLNK3  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLNKA3;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLNK3  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLNKA3;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLNK3  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLNKA3;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLNK3  RESET     KEY24                                                       
          WRITE     ALLLNKA3,KEY24;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          RETURN
.
DEALLNK3  RESET     KEY24                                                       
          DELETE    ALLLNKA3,KEY24                                              
          RETURN
.
RLALLNK3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLNKA3,KEY24;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLNK3  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLNKA3;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLNK3  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLNKA3;ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLNK3  RESET     KEY24                                                       
          UNLOCK    ALLLNKA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAALLN00  READ      CONTROLF,HUND06;*213,ALCNLAUD
          MATCH     "1",ALCNLAUD
          GOTO      WAALLN99 IF NOT EQUAL
.
          PACK     ALLNAUDD,CCC,CYY,CMM,CDD
          REP       " 0",ALLNAUDD
          CLOCK     TIME,ALLNAUDT
          MOVE      PORT,ALLNAUDP
          LOAD      ALLNAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,ALLNAUDS
          MOVE      PASSCODE,ALLNAUDO
          PACK      KEY32,ALLNVISN,ALLNLNKV,ALLNAUDD,ALLNAUDT
          MOVE      KEY32,AUDTSKEY
          CALL      AWALLNK
WAALLN99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAALLN00  READ      CONTROLF,HUND06;*213,ALCNLAUD
          MATCH     "1",ALCNLAUD
          RETURN    IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY32
          CALL      ADALLNK
DAALLN99  RETURN
.
ASALLNK   RESET     KEY32                                                       
          READ      ALLAUDLN,KEY32;;                                            
          RETURN
.
AKALLNK   READ      CONTROLF,HUND06;*213,ALCNLAUD
          MATCH     "1",ALCNLAUD
          RETURN    IF NOT EQUAL
          MOVE      ZERO,OVRCD
          READKS    ALLAUDLN;ALLNAUDD,ALLNAUDT,ALLNAUDP,ALLNAUDR,ALLNAUDS:      
                    ALLNAUDO,ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
AUALLNK   READ      CONTROLF,HUND06;*213,ALCNLAUD
          MATCH     "1",ALCNLAUD
          RETURN    IF NOT EQUAL
.
          UPDATE    ALLAUDLN;ALLNAUDD,ALLNAUDT,ALLNAUDP,ALLNAUDR,ALLNAUDS:      
                    ALLNAUDO,ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          RETURN
.
AWALLNK   RESET     KEY32                                                       
          WRITE     ALLAUDLN,KEY32;ALLNAUDD,ALLNAUDT,ALLNAUDP,ALLNAUDR,ALLNAUDS:
                    ALLNAUDO,ALLNVISN,ALLNLNKV,ALLNSITE,ALLNCLIN,ALLNDATE:      
                        ALLNSTRT,ALLNSLOT,ALLNMOHR,ALLNRCST,ALLNSTAT,ALLNSPAR   
          RETURN
.
ADALLNK   RESET     KEY32                                                       
          DELETE    ALLAUDLN,KEY32;                                             
          RETURN
.
