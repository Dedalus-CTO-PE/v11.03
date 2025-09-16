.
. AMSDSFIO    
. --------
. Filename     : amsdsfaf.dat
.
RSAMDS1   RESET     KEY18                                                       
          READ      AMSDSFA1,KEY18;;                                            
          RETURN
.
RAAMDS1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDSFA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMDS1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDSFA1,KEY18;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:    
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMDS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSDSFA1;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMDS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSDSFA1;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMDS1                                                                         
          UPDATE    AMSDSFA1;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          RETURN
.
WRAMDS1   RESET     KEY18                                                       
          WRITE     AMSDSFA1,KEY18;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:    
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          RETURN
.
DEAMDS1   RESET     KEY18                                                       
          DELETE    AMSDSFA1,KEY18                                              
          RETURN
.
RSAMDS2   RESET     KEY18                                                       
          READ      AMSDSFA2,KEY18;;                                            
          RETURN
.
RAAMDS2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDSFA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMDS2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSDSFA2,KEY18;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:    
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMDS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSDSFA2;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMDS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSDSFA2;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMDS2                                                                         
          UPDATE    AMSDSFA2;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:          
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          RETURN
.
WRAMDS2   RESET     KEY18                                                       
          WRITE     AMSDSFA2,KEY18;AMDSREG,AMDSASS,AMDSYEAR,AMDSG01,AMDSG02:    
                        AMDSG03,AMDSG04,AMDSG05,AMDSG06,AMDSG07,AMDSG08:        
                        AMDSG09,AMDSG10,AMDSG11,AMDSG12,AMDSG13,AMDSA01:        
                        AMDSA02,AMDSA03,AMDSA04,AMDSA05,AMDSA06,AMDSA07:        
                        AMDSA08,AMDSA09,AMDSA10,AMDSA11,AMDSA12,AMDSA13:        
                        AMDST01,AMDST02,AMDST03,AMDST04,AMDST05,AMDST06:        
                        AMDST07,AMDST08,AMDST09,AMDST10,AMDST11,AMDST12:        
                        AMDST13,AMDSAAD,AMDSTAD,AMDSRVT,AMDSTDT,AMDSADT:        
                        AMDSSPA                                                 
          RETURN
.
DEAMDS2   RESET     KEY18                                                       
          DELETE    AMSDSFA2,KEY18                                              
          RETURN
.
