.
. AMSTRNIO    
. --------
. Filename     : amstrnaf.dat
.
RSAMTR1   RESET     KEY19                                                       
          READ      AMSTRNA1,KEY19;;                                            
          RETURN
.
RAAMTR1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMTR1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA1,KEY19;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMTR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSTRNA1;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMTR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSTRNA1;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMTR1                                                                         
          UPDATE    AMSTRNA1;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
WRAMTR1   RESET     KEY19                                                       
          WRITE     AMSTRNA1,KEY19;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
DEAMTR1   RESET     KEY19                                                       
          DELETE    AMSTRNA1,KEY19                                              
          RETURN
.
RSAMTR2   RESET     KEY24                                                       
          READ      AMSTRNA2,KEY24;;                                            
          RETURN
.
RAAMTR2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMTR2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA2,KEY24;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMTR2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSTRNA2;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMTR2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSTRNA2;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMTR2                                                                         
          UPDATE    AMSTRNA2;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
WRAMTR2   RESET     KEY24                                                       
          WRITE     AMSTRNA2,KEY24;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
DEAMTR2   RESET     KEY24                                                       
          DELETE    AMSTRNA2,KEY24                                              
          RETURN
.
RSAMTR3   RESET     KEY25                                                       
          READ      AMSTRNA3,KEY25;;                                            
          RETURN
.
RAAMTR3   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA3,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMTR3   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      AMSTRNA3,KEY25;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMTR3                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSTRNA3;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMTR3                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSTRNA3;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMTR3                                                                         
          UPDATE    AMSTRNA3;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:         
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
WRAMTR3   RESET     KEY25                                                       
          WRITE     AMSTRNA3,KEY25;AMTRREG,AMTRASS,AMTRUNI,AMTRIRUN,AMTRYEAR:   
                        AMTRPER,AMTRDAT,AMTRREF,AMTRCOM,AMTRAMT,AMTRDLED:       
                        AMTRDACC,AMTRCACC,AMTRDIS,AMTRRES,AMTRUR1,AMTRUR2:      
                        AMTRUY1,AMTRUY2,AMTRSPA                                 
          RETURN
.
DEAMTR3   RESET     KEY25                                                       
          DELETE    AMSTRNA3,KEY25                                              
          RETURN
.
