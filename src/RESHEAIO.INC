.
. RESHEAIO    
. --------
. Filename     : resheaaf.dat
.
RSREHA1   RESET     KEY17                                                       
          READ      RESHEAA1,KEY17;;                                            
          RETURN
.
RAREHA1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHA1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA1,KEY17;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHA1   MOVE      ZERO,OVRCD                                                  
          READKS    RESHEAA1;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHA1   MOVE      ZERO,OVRCD                                                  
          READKP    RESHEAA1;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHA1   UPDATE    RESHEAA1;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHA1   RESET     KEY17                                                       
          WRITE     RESHEAA1,KEY17;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          RETURN
.
DEREHA1   RESET     KEY17                                                       
          DELETE    RESHEAA1,KEY17                                              
          RETURN
.
RLREHA1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     RESHEAA1,KEY17;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHA1   MOVE      ZERO,OVRCD                                                  
          READLKS   RESHEAA1;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHA1   MOVE      ZERO,OVRCD                                                  
          READLKP   RESHEAA1;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHA1   RESET     KEY17                                                       
          UNLOCK    RESHEAA1                                                    
          RETURN
.
RSREHA2   RESET     KEY43                                                       
          READ      RESHEAA2,KEY43;;                                            
          RETURN
.
RAREHA2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHA2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA2,KEY43;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHA2   MOVE      ZERO,OVRCD                                                  
          READKS    RESHEAA2;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHA2   MOVE      ZERO,OVRCD                                                  
          READKP    RESHEAA2;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHA2   UPDATE    RESHEAA2;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHA2   RESET     KEY43                                                       
          WRITE     RESHEAA2,KEY43;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          RETURN
.
DEREHA2   RESET     KEY43                                                       
          DELETE    RESHEAA2,KEY43                                              
          RETURN
.
RLREHA2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     RESHEAA2,KEY43;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHA2   MOVE      ZERO,OVRCD                                                  
          READLKS   RESHEAA2;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHA2   MOVE      ZERO,OVRCD                                                  
          READLKP   RESHEAA2;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHA2   RESET     KEY43                                                       
          UNLOCK    RESHEAA2                                                    
          RETURN
.
RSREHA3   RESET     KEY57                                                       
          READ      RESHEAA3,KEY57;;                                            
          RETURN
.
RAREHA3   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA3,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHA3   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEAA3,KEY57;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHA3   MOVE      ZERO,OVRCD                                                  
          READKS    RESHEAA3;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHA3   MOVE      ZERO,OVRCD                                                  
          READKP    RESHEAA3;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHA3   UPDATE    RESHEAA3;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHA3   RESET     KEY57                                                       
          WRITE     RESHEAA3,KEY57;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          RETURN
.
DEREHA3   RESET     KEY57                                                       
          DELETE    RESHEAA3,KEY57                                              
          RETURN
.
RLREHA3   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READL     RESHEAA3,KEY57;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:     
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHA3   MOVE      ZERO,OVRCD                                                  
          READLKS   RESHEAA3;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHA3   MOVE      ZERO,OVRCD                                                  
          READLKP   RESHEAA3;REHARDT,REHARTM,REHARUN,REHAFUR,REHAPID:           
                        REHAVIS,REHASID,REHAMDT,REHAMTM,REHAMID,REHAPAP:        
                        REHAPOR,REHAFAP,REHAFOR,REHAUSC,REHAUCS,REHANOR:        
                        REHACDT,REHACTM,REHACID,REHAFCI,REHASDT,REHASTM:        
                        REHAOID,REHAOSN,REHAOGN,REHARRD,REHARRT,REHADSS:        
                        REHARED,REHARET,REHARST,REHAIBY,REHAADC,REHALAB:        
                        REHALOC,REHARDE,REHASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHA3   RESET     KEY57                                                       
          UNLOCK    RESHEAA3                                                    
          RETURN
.
