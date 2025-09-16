.
. PMSAIDIO    
. --------
. Filename     : pmsaidaf.dat
.
RSPMAID1  RESET     KEY31                                                       
          READ      PMSAIDA1,KEY31;;                                            
          RETURN
.
RAPMAID1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAIDA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAID1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAIDA1,KEY31;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:
                                   PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:
                                   PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:
                                   PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:
                                   PMAIUSMR,PMAISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAID1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAIDA1;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAID1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAIDA1;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAID1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAIDA1;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          RETURN
.
WRPMAID1  RESET     KEY31                                                       
          WRITE     PMSAIDA1,KEY31;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:
                                   PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:
                                   PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:
                                   PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:
                                   PMAIUSMR,PMAISPAR                            
          RETURN
.
DEPMAID1  RESET     KEY31                                                       
          DELETE    PMSAIDA1,KEY31                                              
          RETURN
.
RSPMAID2  RESET     KEY31                                                       
          READ      PMSAIDA2,KEY31;;                                            
          RETURN
.
RAPMAID2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAIDA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAID2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAIDA2,KEY31;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:
                                   PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:
                                   PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:
                                   PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:
                                   PMAIUSMR,PMAISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAID2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAIDA2;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAID2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAIDA2;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAID2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAIDA2;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:      
                             PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:      
                             PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:      
                             PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:      
                             PMAIUSMR,PMAISPAR                                  
          RETURN
.
WRPMAID2  RESET     KEY31                                                       
          WRITE     PMSAIDA2,KEY31;PMAIURNO,PMAITYPE,PMAIALID,PMAIDISU,PMAIHOSP:
                                   PMAIRDAT,PMAICRDT,PMAICRTM,PMAICRUD,PMAIUPDT:
                                   PMAIUPTM,PMAIUPUD,PMAIVSTA,PMAIASTA,PMAIADAT:
                                   PMAIATIM,PMAISURN,PMAIGIVN,PMAIDTMR,PMAITMMR:
                                   PMAIUSMR,PMAISPAR                            
          RETURN
.
DEPMAID2  RESET     KEY31                                                       
          DELETE    PMSAIDA2,KEY31                                              
          RETURN
.
