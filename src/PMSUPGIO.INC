.
. PMSUPGIO    
. --------
. Filename     : pmsupgaf.dat
.
RSPMUPG1  RESET     KEY31                                                       
          READ      PMSUPGA1,KEY31;;                                            
          RETURN
.
RAPMUPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPGA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPGA1,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUPG1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSUPGA1;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUPG1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSUPGA1;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUPG1                                                                        
          UPDATE    PMSUPGA1;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMUPG1  RESET     KEY31                                                       
          WRITE     PMSUPGA1,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          RETURN
.
DEPMUPG1  RESET     KEY31                                                       
          DELETE    PMSUPGA1,KEY31                                              
          RETURN
.
RLPMUPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSUPGA1,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMUPG1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSUPGA1;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMUPG1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSUPGA1;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMUPG1  RESET     KEY31                                                       
          UNLOCK    PMSUPGA1                                                    
          RETURN
.
RSPMUPG2  RESET     KEY31                                                       
          READ      PMSUPGA2,KEY31;;                                            
          RETURN
.
RAPMUPG2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPGA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUPG2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPGA2,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUPG2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSUPGA2;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUPG2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSUPGA2;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUPG2                                                                        
          UPDATE    PMSUPGA2;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMUPG2  RESET     KEY31                                                       
          WRITE     PMSUPGA2,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          RETURN
.
DEPMUPG2  RESET     KEY31                                                       
          DELETE    PMSUPGA2,KEY31                                              
          RETURN
.
RLPMUPG2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSUPGA2,KEY31;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMUPG2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSUPGA2;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMUPG2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSUPGA2;PMUGURNO,PMUGATYP,PMUGCLAM,PMUGFUND,PMUGTABT:      
                        PMUGEDAT,PMUGMAXI,PMUGWARI,PMUGMANI,PMUGMAXO,PMUGWARO:  
                        PMUGMANO,PMUGBRKO,PMUGEXTD,PMUGSDAT,PMUGPNAM,PMUGUDSI:  
                        PMUGSNAP,PMUGENDD,PMUGPROG,PMUGPINT,PMUGRPDT,PMUGRDDT:  
                        PMUGCDAT,PMUGCTIM,PMUGCUID,PMUGUDAT,PMUGUTIM,PMUGUUID:  
                        PMUGSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMUPG2  RESET     KEY31                                                       
          UNLOCK    PMSUPGA2                                                    
          RETURN
.
