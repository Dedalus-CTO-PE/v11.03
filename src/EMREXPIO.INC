.
. EMREXPIO    
. --------
. Filename     : emrexpaf.dat
.
RSEMEXP1  RESET     KEY10                                                       
          READ      EMREXPA1,KEY10;;                                            
          RETURN
.
RAEMEXP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMEXP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA1,KEY10;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMEXP1  MOVE      ZERO,OVRCD                                                  
          READKS    EMREXPA1;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMEXP1  MOVE      ZERO,OVRCD                                                  
          READKP    EMREXPA1;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMEXP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMREXPA1;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMEXP1  RESET     KEY10                                                       
          WRITE     EMREXPA1,KEY10;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          RETURN
.
DEEMEXP1  RESET     KEY10                                                       
          DELETE    EMREXPA1,KEY10                                              
          RETURN
.
RLEMEXP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMREXPA1,KEY10;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMEXP1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMREXPA1;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMEXP1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMREXPA1;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMEXP1  RESET     KEY10                                                       
          UNLOCK    EMREXPA1                                                    
          RETURN
.
RSEMEXP2  RESET     KEY55                                                       
          READ      EMREXPA2,KEY55;;                                            
          RETURN
.
RAEMEXP2  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA2,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMEXP2  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA2,KEY55;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMEXP2  MOVE      ZERO,OVRCD                                                  
          READKS    EMREXPA2;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMEXP2  MOVE      ZERO,OVRCD                                                  
          READKP    EMREXPA2;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMEXP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMREXPA2;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMEXP2  RESET     KEY55                                                       
          WRITE     EMREXPA2,KEY55;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          RETURN
.
DEEMEXP2  RESET     KEY55                                                       
          DELETE    EMREXPA2,KEY55                                              
          RETURN
.
RLEMEXP2  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READL     EMREXPA2,KEY55;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMEXP2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMREXPA2;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMEXP2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMREXPA2;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMEXP2  RESET     KEY55                                                       
          UNLOCK    EMREXPA2                                                    
          RETURN
.
RSEMEXP3  RESET     KEY18                                                       
          READ      EMREXPA3,KEY18;;                                            
          RETURN
.
RAEMEXP3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMEXP3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA3,KEY18;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMEXP3  MOVE      ZERO,OVRCD                                                  
          READKS    EMREXPA3;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMEXP3  MOVE      ZERO,OVRCD                                                  
          READKP    EMREXPA3;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMEXP3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMREXPA3;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMEXP3  RESET     KEY18                                                       
          WRITE     EMREXPA3,KEY18;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          RETURN
.
DEEMEXP3  RESET     KEY18                                                       
          DELETE    EMREXPA3,KEY18                                              
          RETURN
.
RLEMEXP3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     EMREXPA3,KEY18;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMEXP3  MOVE      ZERO,OVRCD                                                  
          READLKS   EMREXPA3;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMEXP3  MOVE      ZERO,OVRCD                                                  
          READLKP   EMREXPA3;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMEXP3  RESET     KEY18                                                       
          UNLOCK    EMREXPA3                                                    
          RETURN
.
RSEMEXP4  RESET     KEY21                                                       
          READ      EMREXPA4,KEY21;;                                            
          RETURN
.
RAEMEXP4  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA4,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMEXP4  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      EMREXPA4,KEY21;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMEXP4  MOVE      ZERO,OVRCD                                                  
          READKS    EMREXPA4;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMEXP4  MOVE      ZERO,OVRCD                                                  
          READKP    EMREXPA4;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMEXP4  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMREXPA4;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMEXP4  RESET     KEY21                                                       
          WRITE     EMREXPA4,KEY21;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          RETURN
.
DEEMEXP4  RESET     KEY21                                                       
          DELETE    EMREXPA4,KEY21                                              
          RETURN
.
RLEMEXP4  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     EMREXPA4,KEY21;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX: 
                                   EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:  
                                   EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:
                                   EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:
                                   EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:
                                   EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:
                                   EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:
                                   EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:
                                   EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMEXP4  MOVE      ZERO,OVRCD                                                  
          READLKS   EMREXPA4;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMEXP4  MOVE      ZERO,OVRCD                                                  
          READLKP   EMREXPA4;EMEXUNIQ,EMEXURNO,EMEXSNAM,EMEXGNAM,EMEXSEX:       
                             EMEXDOB,EMEXAGE,EMEXCOMP,EMEXCOM1,EMEXCOM2:        
                             EMEXCOM3,EMEXCOM4,EMEXCOM5,EMEXCOM6,EMEXTRAN:      
                             EMEXAMBL,EMEXEDAT,EMEXETIM,EMEXGPCD,EMEXCUID:      
                             EMEXCDAT,EMEXCTIM,EMEXUUID,EMEXUDAT,EMEXUTIM:      
                             EMEXATSR,EMEXACPS,EMEXACPT,EMEXETAD,EMEXETAT:      
                             EMEXTRIG,EMEXEXPL,EMEXSITE,EMEXCONT,EMEXDELT:      
                             EMEXREMV,EMEXTSRC,EMEXCALL,EMEXAIN1,EMEXAIN2:      
                             EMEXAIN3,EMEXAIN4,EMEXAIN5,EMEXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMEXP4  RESET     KEY21                                                       
          UNLOCK    EMREXPA4                                                    
          RETURN
.
