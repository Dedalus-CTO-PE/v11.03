.
. PMSIRQIO    
. --------
. Filename     : pmsirqaf.dat
.
RSPMIRQ1  RESET     KEY68                                                       
          READ      PMSIRQA1,KEY68;;                                            
          RETURN
.
RAPMIRQ1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIRQA1,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIRQ1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIRQA1,KEY68;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIRQ1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIRQA1;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:      
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIRQ1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIRQA1;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:      
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIRQ1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIRQA1;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:      
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIRQ1  RESET     KEY68                                                       
          WRITE     PMSIRQA1,KEY68;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          RETURN
.
DEPMIRQ1  RESET     KEY68                                                       
          DELETE    PMSIRQA1,KEY68                                              
          RETURN
.
RLPMIRQ1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIRQA1,KEY68;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIRQ1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIRQA1;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:      
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIRQ1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIRQA1;PMIQRTYP,PMIQCODE,PMIQRDAT,PMIQRTIM,PMIQRUID:      
                        PMIQSURN,PMIQFNAM,PMIQSNAM,PMIQBDAT,PMIQPSEX,PMIQMEDI:  
                        PMIQMCCD,PMIQMEDV,PMIQDVAN,PMIQIDEN,PMIQADD1,PMIQADD2:  
                        PMIQADD3,PMIQADD4,PMIQPOST,PMIQSAD1,PMIQSAD2,PMIQSAD3:  
                        PMIQSAD4,PMIQSPST,PMIQPTYP,PMIQNAME,PMIQSTYP,PMIQUNIT:  
                        PMIQSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIRQ1  RESET     KEY68                                                       
          UNLOCK    PMSIRQA1                                                    
          RETURN
.
