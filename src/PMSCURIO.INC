.
. PMSCURIO    
. --------
. Filename     : pmscuraf.dat
.
RSPMCUR1  RESET     KEY8                                                        
          READ      PMSCURA1,KEY8;;                                             
          RETURN
.
RAPMCUR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCURA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCURA1,KEY8;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE: 
                                  PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2: 
                                  PMCUTSTA,PMCUTLOC,PMCUSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA1;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA1;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA1;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR1  RESET     KEY8                                                        
          WRITE     PMSCURA1,KEY8;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE: 
                                  PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2: 
                                  PMCUTSTA,PMCUTLOC,PMCUSPAR                    
          RETURN
.
DEPMCUR1  RESET     KEY8                                                        
          DELETE    PMSCURA1,KEY8                                               
          RETURN
.
RLPMCUR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCURA1,KEY8;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE: 
                                  PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2: 
                                  PMCUTSTA,PMCUTLOC,PMCUSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA1;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA1;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR1  RESET     KEY8                                                        
          UNLOCK    PMSCURA1                                                    
          RETURN
.
RSPMCUR2  RESET     KEY96                                                       
          READ      PMSCURA2,KEY96;;                                            
          RETURN
.
RAPMCUR2  RESET     KEY96                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA2,KEY96;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR2  RESET     KEY96                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA2,KEY96;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA2;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA2;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA2;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR2  RESET     KEY96                                                       
          WRITE     PMSCURA2,KEY96;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR2  RESET     KEY96                                                       
          DELETE    PMSCURA2,KEY96                                              
          RETURN
.
RLPMCUR2  RESET     KEY96                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA2,KEY96;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA2;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA2;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR2  RESET     KEY96                                                       
          UNLOCK    PMSCURA2                                                    
          RETURN
.
RSPMCUR3  RESET     KEY16                                                       
          READ      PMSCURA3,KEY16;;                                            
          RETURN
.
RAPMCUR3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA3,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA3;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA3;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA3;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR3  RESET     KEY16                                                       
          WRITE     PMSCURA3,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR3  RESET     KEY16                                                       
          DELETE    PMSCURA3,KEY16                                              
          RETURN
.
RLPMCUR3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA3,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA3;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA3;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR3  RESET     KEY16                                                       
          UNLOCK    PMSCURA3                                                    
          RETURN
.
RSPMCUR4  RESET     KEY16                                                       
          READ      PMSCURA4,KEY16;;                                            
          RETURN
.
RAPMCUR4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA4,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA4;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA4;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA4;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR4  RESET     KEY16                                                       
          WRITE     PMSCURA4,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR4  RESET     KEY16                                                       
          DELETE    PMSCURA4,KEY16                                              
          RETURN
.
RLPMCUR4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA4,KEY16;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA4;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA4;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR4  RESET     KEY16                                                       
          UNLOCK    PMSCURA4                                                    
          RETURN
.
RSPMCUR5  RESET     KEY97                                                       
          READ      PMSCURA5,KEY97;;                                            
          RETURN
.
RAPMCUR5  RESET     KEY97                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA5,KEY97;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR5  RESET     KEY97                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA5,KEY97;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA5;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA5;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA5;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR5  RESET     KEY97                                                       
          WRITE     PMSCURA5,KEY97;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR5  RESET     KEY97                                                       
          DELETE    PMSCURA5,KEY97                                              
          RETURN
.
RLPMCUR5  RESET     KEY97                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA5,KEY97;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA5;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA5;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR5  RESET     KEY97                                                       
          UNLOCK    PMSCURA5                                                    
          RETURN
.
RSPMCUR6  RESET     KEY99                                                       
          READ      PMSCURA6,KEY99;;                                            
          RETURN
.
RAPMCUR6  RESET     KEY99                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA6,KEY99;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR6  RESET     KEY99                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA6,KEY99;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA6;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA6;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA6;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR6  RESET     KEY99                                                       
          WRITE     PMSCURA6,KEY99;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR6  RESET     KEY99                                                       
          DELETE    PMSCURA6,KEY99                                              
          RETURN
.
RLPMCUR6  RESET     KEY99                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA6,KEY99;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR6  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA6;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR6  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA6;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR6  RESET     KEY99                                                       
          UNLOCK    PMSCURA6                                                    
          RETURN
.
RSPMCUR7  RESET     KEY88                                                       
          READ      PMSCURA7,KEY88;;                                            
          RETURN
.
RAPMCUR7  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA7,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCUR7  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCURA7,KEY88;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCUR7  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCURA7;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCUR7  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCURA7;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCUR7  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCURA7;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCUR7  RESET     KEY88                                                       
          WRITE     PMSCURA7,KEY88;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          RETURN
.
DEPMCUR7  RESET     KEY88                                                       
          DELETE    PMSCURA7,KEY88                                              
          RETURN
.
RLPMCUR7  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCURA7,KEY88;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:
                                   PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:
                                   PMCUTSTA,PMCUTLOC,PMCUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCUR7  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCURA7;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCUR7  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCURA7;PMCUVISN,PMCUSURN,PMCUGNAM,PMCUURNO,PMCUDATE:      
                             PMCULOCN,PMCUSYST,PMCUOSIT,PMCUHOSP,PMCUGNM2:      
                             PMCUTSTA,PMCUTLOC,PMCUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCUR7  RESET     KEY88                                                       
          UNLOCK    PMSCURA7                                                    
          RETURN
.
