.
. AMSDPHIO    
. --------
. Filename     : amsdphaf.dat
.
RSAMDH1   RESET     KEY22                                                       
          READ      AMSDPHA1,KEY22;;                                            
          RETURN
.
RAAMDH1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDPHA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMDH1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDPHA1,KEY22;AMDHREG,AMDHASS,AMDHDAT,AMDHFDPT,AMDHTDPT:   
                        AMDHCOM,AMDHUA1,AMDHUA2,AMDHUR1,AMDHUR2,AMDHUY1:        
                        AMDHUY2,AMDHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMDH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSDPHA1;AMDHREG,AMDHASS,AMDHDAT,AMDHFDPT,AMDHTDPT:         
                        AMDHCOM,AMDHUA1,AMDHUA2,AMDHUR1,AMDHUR2,AMDHUY1:        
                        AMDHUY2,AMDHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMDH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSDPHA1;AMDHREG,AMDHASS,AMDHDAT,AMDHFDPT,AMDHTDPT:         
                        AMDHCOM,AMDHUA1,AMDHUA2,AMDHUR1,AMDHUR2,AMDHUY1:        
                        AMDHUY2,AMDHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMDH1                                                                         
          UPDATE    AMSDPHA1;AMDHREG,AMDHASS,AMDHDAT,AMDHFDPT,AMDHTDPT:         
                        AMDHCOM,AMDHUA1,AMDHUA2,AMDHUR1,AMDHUR2,AMDHUY1:        
                        AMDHUY2,AMDHSPA                                         
          RETURN
.
WRAMDH1   RESET     KEY22                                                       
          WRITE     AMSDPHA1,KEY22;AMDHREG,AMDHASS,AMDHDAT,AMDHFDPT,AMDHTDPT:   
                        AMDHCOM,AMDHUA1,AMDHUA2,AMDHUR1,AMDHUR2,AMDHUY1:        
                        AMDHUY2,AMDHSPA                                         
          RETURN
.
DEAMDH1   RESET     KEY22                                                       
          DELETE    AMSDPHA1,KEY22                                              
          RETURN
.
