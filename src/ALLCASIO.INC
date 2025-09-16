.
. ALLCASIO    
. --------
. Filename     : allcasaf.dat
.
RSALCAS1  RESET     KEY10                                                       
          READ      ALLCASA1,KEY10;;                                            
          RETURN
.
RAALCAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCASA1,KEY10;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCAS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLCASA1;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCAS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLCASA1;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCAS1                                                                        
          UPDATE    ALLCASA1;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCAS1  RESET     KEY10                                                       
          WRITE     ALLCASA1,KEY10;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          RETURN
.
DEALCAS1  RESET     KEY10                                                       
          DELETE    ALLCASA1,KEY10                                              
          RETURN
.
RLALCAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     ALLCASA1,KEY10;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLCASA1;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLCASA1;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCAS1  RESET     KEY10                                                       
          UNLOCK    ALLCASA1                                                    
          RETURN
.
RSALCAS2  RESET     KEY50                                                       
          READ      ALLCASA2,KEY50;;                                            
          RETURN
.
RAALCAS2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCASA2,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCAS2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCASA2,KEY50;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCAS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLCASA2;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCAS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLCASA2;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCAS2                                                                        
          UPDATE    ALLCASA2;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCAS2  RESET     KEY50                                                       
          WRITE     ALLCASA2,KEY50;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          RETURN
.
DEALCAS2  RESET     KEY50                                                       
          DELETE    ALLCASA2,KEY50                                              
          RETURN
.
RLALCAS2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READL     ALLCASA2,KEY50;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCAS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLCASA2;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCAS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLCASA2;ALCATEAM,ALCADESC,ALCALPAT,ALCALREF,ALCACDEP:      
                        ALCALCOD,ALCAACOD,ALCAACTV,ALCAHOSP,ALCACDAT,ALCACTIM:  
                        ALCACUID,ALCAUDAT,ALCAUTIM,ALCAUUID,ALCAORID,ALCASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCAS2  RESET     KEY50                                                       
          UNLOCK    ALLCASA2                                                    
          RETURN
.
