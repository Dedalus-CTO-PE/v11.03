.
. PMSCDGIO    
. --------
. Filename     : pmscdgaf.dat
.
RSPMCDG1  RESET     KEY29                                                       
          READ      PMSCDGA1,KEY29;;                                            
          RETURN
.
RAPMCDG1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCDGA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCDG1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCDGA1,KEY29;DPMCGADN,DPMCGCNR,PMCGPRMM,DPMCGBSD,DPMCGCDI:
                        PMCGCDDS,PMCGSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPMCGADN,PMCGADNO                                           
          MOVE      DPMCGCNR,PMCGCNRG                                           
          MOVE      DPMCGBSD,PMCGBSDG                                           
          MOVE      DPMCGCDI,PMCGCDIG                                           
          RETURN
.
RKPMCDG1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCDGA1;DPMCGADN,DPMCGCNR,PMCGPRMM,DPMCGBSD,DPMCGCDI:      
                        PMCGCDDS,PMCGSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPMCGADN,PMCGADNO                                           
          MOVE      DPMCGCNR,PMCGCNRG                                           
          MOVE      DPMCGBSD,PMCGBSDG                                           
          MOVE      DPMCGCDI,PMCGCDIG                                           
          RETURN
.
RPPMCDG1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCDGA1;DPMCGADN,DPMCGCNR,PMCGPRMM,DPMCGBSD,DPMCGCDI:      
                        PMCGCDDS,PMCGSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DPMCGADN,PMCGADNO                                           
          MOVE      DPMCGCNR,PMCGCNRG                                           
          MOVE      DPMCGBSD,PMCGBSDG                                           
          MOVE      DPMCGCDI,PMCGCDIG                                           
          RETURN
.
UPPMCDG1                                                                        
          MOVE      PMCGADNO,DPMCGADN                                           
          MOVE      PMCGCNRG,DPMCGCNR                                           
          MOVE      PMCGBSDG,DPMCGBSD                                           
          MOVE      PMCGCDIG,DPMCGCDI                                           
          UPDATE    PMSCDGA1;DPMCGADN,DPMCGCNR,PMCGPRMM,DPMCGBSD,DPMCGCDI:      
                        PMCGCDDS,PMCGSPAR                                       
          RETURN
.
WRPMCDG1  RESET     KEY29                                                       
          MOVE      PMCGADNO,DPMCGADN                                           
          MOVE      PMCGCNRG,DPMCGCNR                                           
          MOVE      PMCGBSDG,DPMCGBSD                                           
          MOVE      PMCGCDIG,DPMCGCDI                                           
          WRITE     PMSCDGA1,KEY29;DPMCGADN,DPMCGCNR,PMCGPRMM,DPMCGBSD,DPMCGCDI:
                        PMCGCDDS,PMCGSPAR                                       
          RETURN
.
DEPMCDG1  RESET     KEY29                                                       
          DELETE    PMSCDGA1,KEY29                                              
          RETURN
.
