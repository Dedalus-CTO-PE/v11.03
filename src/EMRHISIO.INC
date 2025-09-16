.
. EMRHISIO    
. --------
. Filename     : emrhisaf.dat
.
RSEMHIS1  RESET     KEY22                                                       
          READ      EMRHISA1,KEY22;;                                            
          RETURN
.
RAEMHIS1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHIS1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA1,KEY22;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHIS1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHISA1;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHIS1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHISA1;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHIS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHISA1;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMHIS1  RESET     KEY22                                                       
          WRITE     EMRHISA1,KEY22;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          RETURN
.
DEEMHIS1  RESET     KEY22                                                       
          DELETE    EMRHISA1,KEY22                                              
          RETURN
.
RLEMHIS1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     EMRHISA1,KEY22;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMHIS1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRHISA1;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMHIS1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRHISA1;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMHIS1  RESET     KEY22                                                       
          UNLOCK    EMRHISA1                                                    
          RETURN
.
RSEMHIS2  RESET     KEY32                                                       
          READ      EMRHISA2,KEY32;;                                            
          RETURN
.
RAEMHIS2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHIS2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA2,KEY32;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHIS2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHISA2;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHIS2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHISA2;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHIS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHISA2;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMHIS2  RESET     KEY32                                                       
          WRITE     EMRHISA2,KEY32;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          RETURN
.
DEEMHIS2  RESET     KEY32                                                       
          DELETE    EMRHISA2,KEY32                                              
          RETURN
.
RLEMHIS2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     EMRHISA2,KEY32;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMHIS2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRHISA2;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMHIS2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRHISA2;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMHIS2  RESET     KEY32                                                       
          UNLOCK    EMRHISA2                                                    
          RETURN
.
RSEMHIS3  RESET     KEY38                                                       
          READ      EMRHISA3,KEY38;;                                            
          RETURN
.
RAEMHIS3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA3,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHIS3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA3,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHIS3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHISA3;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHIS3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHISA3;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHIS3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHISA3;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMHIS3  RESET     KEY38                                                       
          WRITE     EMRHISA3,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          RETURN
.
DEEMHIS3  RESET     KEY38                                                       
          DELETE    EMRHISA3,KEY38                                              
          RETURN
.
RLEMHIS3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRHISA3,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMHIS3  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRHISA3;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMHIS3  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRHISA3;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMHIS3  RESET     KEY38                                                       
          UNLOCK    EMRHISA3                                                    
          RETURN
.
RSEMHIS4  RESET     KEY38                                                       
          READ      EMRHISA4,KEY38;;                                            
          RETURN
.
RAEMHIS4  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA4,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHIS4  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHISA4,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHIS4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHISA4;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHIS4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHISA4;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHIS4  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHISA4;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMHIS4  RESET     KEY38                                                       
          WRITE     EMRHISA4,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          RETURN
.
DEEMHIS4  RESET     KEY38                                                       
          DELETE    EMRHISA4,KEY38                                              
          RETURN
.
RLEMHIS4  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRHISA4,KEY38;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS:     
                                   EMHILOC,EMHIDOC,EMHINUR,EMHIDSD,EMHIDST:     
                                   EMHINSD,EMHINST,EMHIRHND,EMHIDRBC,EMHIODCD:  
                                   EMHIODSD,EMHIODST,EMHICDAT,EMHICTIM,EMHICUID:
                                   EMHIUDAT,EMHIUTIM,EMHIUUID,EMHISPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMHIS4  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRHISA4;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMHIS4  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRHISA4;EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMHIS4  RESET     KEY38                                                       
          UNLOCK    EMRHISA4                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAEMHI00  MOVE      "  122",AUDTSECT
          MOVE      " 27",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAEMHI99 IF NOT EQUAL
.
          PACK     EMHIAUDD,CCC,CYY,CMM,CDD
          REP       " 0",EMHIAUDD
          CLOCK     TIME,EMHIAUDT
          MOVE      PORT,EMHIAUDP
          LOAD      EMHIAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,EMHIAUDS
          MOVE      PASSCODE,EMHIAUDO
          PACK      KEY19,EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWEMHIS1
WAEMHI99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAEMHI00  MOVE      "  122",AUDTSECT
          MOVE      " 27",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAEMHI99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADEMHIS1
DAEMHI99  RETURN
.
ASEMHIS1  RESET     KEY19                                                       
          READ      EMRAUDHI,KEY19;;                                            
          RETURN
.
AKEMHIS1  MOVE      ZERO,OVRCD
          READKS    EMRAUDHI;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:      
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          GOTO      OVERCOND IF OVER
          RETURN
.
AUEMHIS1  UPDATE    EMRAUDHI;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:      
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          RETURN
.
AWEMHIS1  RESET     KEY19                                                       
          WRITE     EMRAUDHI,KEY19;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:   
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:   
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:      
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:      
                             EMHIUUID,EMHISPA                                   
          RETURN
.
ADEMHIS1  RESET     KEY19                                                       
          DELETE    EMRAUDHI,KEY19;                                             
          RETURN
.
ASEMHIS2  RESET     KEY27
          READ      EMRAUDH2,KEY27;;
          RETURN
.
APEMHIS2  MOVE      ZERO,OVRCD
          READKP    EMRAUDH2;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:
                             EMHIUUID,EMHISPA
          GOTO      OVERCOND IF OVER
          RETURN
.
AKEMHIS2  MOVE      ZERO,OVRCD
          READKS    EMRAUDH2;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:
                             EMHIUUID,EMHISPA
          GOTO      OVERCOND IF OVER
          RETURN
.
AUEMHIS2  UPDATE    EMRAUDH2;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:
                             EMHIUUID,EMHISPA
          RETURN
.
AWEMHIS2  RESET     KEY27
          WRITE     EMRAUDH2,KEY19;EMHIAUDD,EMHIAUDT,EMHIAUDP,EMHIAUDR,EMHIAUDS:
                    EMHIAUDO,EMHIVIS,EMHIDAT,EMHITIM,EMHIUPT,EMHIEUS,EMHILOC:
                             EMHIDOC,EMHINUR,EMHIDSD,EMHIDST,EMHINSD,EMHINST:
                             EMHIRHND,EMHIDRBC,EMHIODCD,EMHIODSD,EMHIODST:
                             EMHICDAT,EMHICTIM,EMHICUID,EMHIUDAT,EMHIUTIM:
                             EMHIUUID,EMHISPA
          RETURN
.
ADEMHIS2  RESET     KEY27
          DELETE    EMRAUDH2,KEY27;
          RETURN
.
