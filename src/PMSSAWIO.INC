.
. PMSSAWIO    
. --------
. Filename     : pmssawaf.dat
.
RSPMSAW1  RESET     KEY13                                                       
          READ      PMSSAWA1,KEY13;;                                            
          RETURN
.
RAPMSAW1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSAW1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA1,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSAW1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSAWA1;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSAW1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSAWA1;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSAW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSAWA1;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          RETURN
.
WRPMSAW1  RESET     KEY13                                                       
          WRITE     PMSSAWA1,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          RETURN
.
DEPMSAW1  RESET     KEY13                                                       
          DELETE    PMSSAWA1,KEY13                                              
          RETURN
.
RSPMSAW2  RESET     KEY13                                                       
          READ      PMSSAWA2,KEY13;;                                            
          RETURN
.
RAPMSAW2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSAW2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA2,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSAW2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSAWA2;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSAW2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSAWA2;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSAW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSAWA2;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          RETURN
.
WRPMSAW2  RESET     KEY13                                                       
          WRITE     PMSSAWA2,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          RETURN
.
DEPMSAW2  RESET     KEY13                                                       
          DELETE    PMSSAWA2,KEY13                                              
          RETURN
.
RSPMSAW3  RESET     KEY13                                                       
          READ      PMSSAWA3,KEY13;;                                            
          RETURN
.
RAPMSAW3  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA3,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSAW3  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSAWA3,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSAW3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSAWA3;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSAW3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSAWA3;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSAW3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSAWA3;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:      
                             PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:      
                             PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:      
                             PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:      
                             PMSASPAR                                           
          RETURN
.
WRPMSAW3  RESET     KEY13                                                       
          WRITE     PMSSAWA3,KEY13;PMSACNTR,PMSACLCD,PMSAASVR,PMSACCOD,PMSAADSC:
                                   PMSAEDSC,PMSASDOV,PMSAALOS,PMSALBIN,PMSAUBIN:
                                   PMSASDPW,PMSASSOP,PMSAINPW,PMSALSOP,PMSACDAT:
                                   PMSACTIM,PMSACUID,PMSAUDAT,PMSAUTIM,PMSAUUID:
                                   PMSASPAR                                     
          RETURN
.
DEPMSAW3  RESET     KEY13                                                       
          DELETE    PMSSAWA3,KEY13                                              
          RETURN
.
