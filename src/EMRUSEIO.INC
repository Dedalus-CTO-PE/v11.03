.
. EMRUSEIO    
. --------
. Filename     : emruseaf.dat
.
RSEMUSE1  RESET     KEY10                                                       
          READ      EMRUSEA1,KEY10;;                                            
          RETURN
.
RAEMUSE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRUSEA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMUSE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRUSEA1,KEY10;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMUSE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRUSEA1;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMUSE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRUSEA1;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMUSE1                                                                        
          UPDATE    EMRUSEA1;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMUSE1  RESET     KEY10                                                       
          WRITE     EMRUSEA1,KEY10;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          RETURN
.
DEEMUSE1  RESET     KEY10                                                       
          DELETE    EMRUSEA1,KEY10                                              
          RETURN
.
RLEMUSE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMRUSEA1,KEY10;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMUSE1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRUSEA1;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMUSE1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRUSEA1;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMUSE1  RESET     KEY10                                                       
          UNLOCK    EMRUSEA1                                                    
          RETURN
.
RSEMUSE2  RESET     KEY45                                                       
          READ      EMRUSEA2,KEY45;;                                            
          RETURN
.
RAEMUSE2  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      EMRUSEA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMUSE2  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      EMRUSEA2,KEY45;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMUSE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRUSEA2;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMUSE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRUSEA2;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMUSE2                                                                        
          UPDATE    EMRUSEA2;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMUSE2  RESET     KEY45                                                       
          WRITE     EMRUSEA2,KEY45;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          RETURN
.
DEEMUSE2  RESET     KEY45                                                       
          DELETE    EMRUSEA2,KEY45                                              
          RETURN
.
RLEMUSE2  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READL     EMRUSEA2,KEY45;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:     
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMUSE2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRUSEA2;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMUSE2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRUSEA2;EMUSEUS,EMUSDES,EMUSPAS,EMUSLEV,EMUSACT:           
                        EMUSEDT,EMUSSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMUSE2  RESET     KEY45                                                       
          UNLOCK    EMRUSEA2                                                    
          RETURN
.
