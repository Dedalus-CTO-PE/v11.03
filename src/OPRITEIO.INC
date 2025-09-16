.
. OPRITEIO    
. --------
. Filename     : opriteaf.dat
.
RSOPITE1  RESET     KEY15                                                       
          READ      OPRITEA1,KEY15;;                                            
          RETURN
.
RAOPITE1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPITE1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA1,KEY15;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPITE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRITEA1;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPITE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRITEA1;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPITE1                                                                        
          UPDATE    OPRITEA1;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
WROPITE1  RESET     KEY15                                                       
          WRITE     OPRITEA1,KEY15;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
DEOPITE1  RESET     KEY15                                                       
          DELETE    OPRITEA1,KEY15                                              
          RETURN
.
RSOPITE2  RESET     KEY65                                                       
          READ      OPRITEA2,KEY65;;                                            
          RETURN
.
RAOPITE2  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA2,KEY65;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPITE2  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA2,KEY65;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPITE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRITEA2;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPITE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRITEA2;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPITE2                                                                        
          UPDATE    OPRITEA2;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
WROPITE2  RESET     KEY65                                                       
          WRITE     OPRITEA2,KEY65;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
DEOPITE2  RESET     KEY65                                                       
          DELETE    OPRITEA2,KEY65                                              
          RETURN
.
RSOPITE3  RESET     KEY18                                                       
          READ      OPRITEA3,KEY18;;                                            
          RETURN
.
RAOPITE3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPITE3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA3,KEY18;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPITE3                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRITEA3;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPITE3                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRITEA3;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPITE3                                                                        
          UPDATE    OPRITEA3;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
WROPITE3  RESET     KEY18                                                       
          WRITE     OPRITEA3,KEY18;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
DEOPITE3  RESET     KEY18                                                       
          DELETE    OPRITEA3,KEY18                                              
          RETURN
.
RSOPITE4  RESET     KEY66                                                       
          READ      OPRITEA4,KEY66;;                                            
          RETURN
.
RAOPITE4  RESET     KEY66                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA4,KEY66;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPITE4  RESET     KEY66                                                       
          MOVE      ZERO,OVRCD
          READ      OPRITEA4,KEY66;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPITE4                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRITEA4;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPITE4                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRITEA4;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPITE4                                                                        
          UPDATE    OPRITEA4;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:      
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
WROPITE4  RESET     KEY66                                                       
          WRITE     OPRITEA4,KEY66;OPITCODE,OPITDESC,OPITINDC,OPITGRPG,OPITUCSS:
                        OPITCCBN,OPITCATN,OPITDIPD,OPITSCAT,OPITSDES,OPITLMAD:  
                        OPITCRST,OPITSTDT,OPITNOTE,OPITUSLO,OPITCULO,OPITUDT1:  
                        OPITUDT2,OPITUDT3,OPITUDT4,OPITUDT5,OPITUDF1,OPITUDF2:  
                        OPITUDF3,OPITUDF4,OPITUDF5,OPITDTE1,OPITDTE2,OPITDTE3:  
                        OPITDTE4,OPITDTE5,OPITTME1,OPITTME2,OPITTME3,OPITTME4:  
                        OPITTME5,OPITSPAR                                       
          RETURN
.
DEOPITE4  RESET     KEY66                                                       
          DELETE    OPRITEA4,KEY66                                              
          RETURN
.
