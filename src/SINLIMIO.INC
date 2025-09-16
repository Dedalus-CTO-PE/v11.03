.
. SINLIMIO    
. --------
. Filename     : sinlimaf.dat
.
RSSILI1   RESET     KEY17                                                       
          READ      SINLIMA1,KEY17;;                                            
          RETURN
.
RASILI1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINLIMA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSILI1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINLIMA1,KEY17;SILICST,SILISUP,SILICAT,SILIQTY,SILISUT:     
                        SILISUB,SILIPD,SILIPN,SILICON,SILICDT,SILIEDT:          
                        SILIECT,SILISPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSILI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINLIMA1;SILICST,SILISUP,SILICAT,SILIQTY,SILISUT:           
                        SILISUB,SILIPD,SILIPN,SILICON,SILICDT,SILIEDT:          
                        SILIECT,SILISPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSILI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINLIMA1;SILICST,SILISUP,SILICAT,SILIQTY,SILISUT:           
                        SILISUB,SILIPD,SILIPN,SILICON,SILICDT,SILIEDT:          
                        SILIECT,SILISPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSILI1                                                                         
          UPDATE    SINLIMA1;SILICST,SILISUP,SILICAT,SILIQTY,SILISUT:           
                        SILISUB,SILIPD,SILIPN,SILICON,SILICDT,SILIEDT:          
                        SILIECT,SILISPA                                         
          RETURN
.
WRSILI1   RESET     KEY17                                                       
          WRITE     SINLIMA1,KEY17;SILICST,SILISUP,SILICAT,SILIQTY,SILISUT:     
                        SILISUB,SILIPD,SILIPN,SILICON,SILICDT,SILIEDT:          
                        SILIECT,SILISPA                                         
          RETURN
.
DESILI1   RESET     KEY17                                                       
          DELETE    SINLIMA1,KEY17                                              
          RETURN
.
