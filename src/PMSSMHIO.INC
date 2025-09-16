.
. PMSSMHIO    
. --------
. Filename     : pmssmhaf.dat
.
RSPMSMH1  RESET     KEY16                                                       
          READ      PMSSMHA1,KEY16;;                                            
          RETURN
.
RAPMSMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA1,KEY16;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA1;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA1;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA1;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH1  RESET     KEY16                                                       
          WRITE     PMSSMHA1,KEY16;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH1  RESET     KEY16                                                       
          DELETE    PMSSMHA1,KEY16                                              
          RETURN
.
RLPMSMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA1,KEY16;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA1;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA1;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH1  RESET     KEY16                                                       
          UNLOCK    PMSSMHA1                                                    
          RETURN
.
RSPMSMH2  RESET     KEY24                                                       
          READ      PMSSMHA2,KEY24;;                                            
          RETURN
.
RAPMSMH2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA2,KEY24;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA2;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA2;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA2;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH2  RESET     KEY24                                                       
          WRITE     PMSSMHA2,KEY24;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH2  RESET     KEY24                                                       
          DELETE    PMSSMHA2,KEY24                                              
          RETURN
.
RLPMSMH2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA2,KEY24;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA2;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA2;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH2  RESET     KEY24                                                       
          UNLOCK    PMSSMHA2                                                    
          RETURN
.
RSPMSMH3  RESET     KEY32                                                       
          READ      PMSSMHA3,KEY32;;                                            
          RETURN
.
RAPMSMH3  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA3,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH3  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA3,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA3;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA3;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA3;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH3  RESET     KEY32                                                       
          WRITE     PMSSMHA3,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH3  RESET     KEY32                                                       
          DELETE    PMSSMHA3,KEY32                                              
          RETURN
.
RLPMSMH3  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA3,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA3;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA3;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH3  RESET     KEY32                                                       
          UNLOCK    PMSSMHA3                                                    
          RETURN
.
RSPMSMH4  RESET     KEY18                                                       
          READ      PMSSMHA4,KEY18;;                                            
          RETURN
.
RAPMSMH4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA4,KEY18;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA4;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA4;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA4;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH4  RESET     KEY18                                                       
          WRITE     PMSSMHA4,KEY18;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH4  RESET     KEY18                                                       
          DELETE    PMSSMHA4,KEY18                                              
          RETURN
.
RLPMSMH4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA4,KEY18;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA4;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA4;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH4  RESET     KEY18                                                       
          UNLOCK    PMSSMHA4                                                    
          RETURN
.
RSPMSMH5  RESET     KEY64                                                       
          READ      PMSSMHA5,KEY64;;                                            
          RETURN
.
RAPMSMH5  RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA5,KEY64;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH5  RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA5,KEY64;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA5;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA5;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA5;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH5  RESET     KEY64                                                       
          WRITE     PMSSMHA5,KEY64;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH5  RESET     KEY64                                                       
          DELETE    PMSSMHA5,KEY64                                              
          RETURN
.
RLPMSMH5  RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA5,KEY64;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA5;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA5;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH5  RESET     KEY64                                                       
          UNLOCK    PMSSMHA5                                                    
          RETURN
.
RSPMSMH6  RESET     KEY32                                                       
          READ      PMSSMHA6,KEY32;;                                            
          RETURN
.
RAPMSMH6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA6,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSMH6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSMHA6,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSMH6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSMHA6;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSMH6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSMHA6;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSMH6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSMHA6;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSMH6  RESET     KEY32                                                       
          WRITE     PMSSMHA6,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          RETURN
.
DEPMSMH6  RESET     KEY32                                                       
          DELETE    PMSSMHA6,KEY32                                              
          RETURN
.
RLPMSMH6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSMHA6,KEY32;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:
                                   PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:
                                   PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:
                                   PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:
                                   PMSMSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSMH6  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSMHA6;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSMH6  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSMHA6;PMSMUMID,PMSMURNO,PMSMMTYP,PMSMRKEY,PMSMSCOD:      
                             PMSMSDAT,PMSMSTIM,PMSMMNUM,PMSMSUID,PMSMMESA:      
                             PMSMMESB,PMSMMESC,PMSMMESD,PMSMMESE,PMSMMESF:      
                             PMSMSTAT,PMSMAHOC,PMSMCONT,PMSMCTYP,PMSMRMID:      
                             PMSMSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSMH6  RESET     KEY32                                                       
          UNLOCK    PMSSMHA6                                                    
          RETURN
.
