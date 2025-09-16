.
. WEBEMCIO    
. --------
. Filename     : webemcaf.dat
.
RSWBEMC1  RESET     KEY27                                                       
          READ      WEBEMCA1,KEY27;;                                            
          RETURN
.
RAWBEMC1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMC1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA1,KEY27;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMC1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMCA1;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMC1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMCA1;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMCA1;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          RETURN
.
WRWBEMC1  RESET     KEY27                                                       
          WRITE     WEBEMCA1,KEY27;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          RETURN
.
DEWBEMC1  RESET     KEY27                                                       
          DELETE    WEBEMCA1,KEY27                                              
          RETURN
.
RSWBEMC2  RESET     KEY51                                                       
          READ      WEBEMCA2,KEY51;;                                            
          RETURN
.
RAWBEMC2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA2,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMC2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA2,KEY51;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMC2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMCA2;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMC2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMCA2;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMCA2;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          RETURN
.
WRWBEMC2  RESET     KEY51                                                       
          WRITE     WEBEMCA2,KEY51;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          RETURN
.
DEWBEMC2  RESET     KEY51                                                       
          DELETE    WEBEMCA2,KEY51                                              
          RETURN
.
RSWBEMC3  RESET     KEY63                                                       
          READ      WEBEMCA3,KEY63;;                                            
          RETURN
.
RAWBEMC3  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA3,KEY63;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMC3  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMCA3,KEY63;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMC3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMCA3;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMC3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMCA3;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMC3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMCA3;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:      
                             WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:      
                             WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR                
          RETURN
.
WRWBEMC3  RESET     KEY63                                                       
          WRITE     WEBEMCA3,KEY63;WBEWARID,WBEWRPTC,WBEWMEVC,WBEWSRVC,WBEWSVID:
                                   WBEWSVBE,WBEWSVCH,WBEWSVDT,WBEWSVEX,WBEWSVIT:
                                   WBEWSVSC,WBEWTRID,WBEWMSID,WBEWSPAR          
          RETURN
.
DEWBEMC3  RESET     KEY63                                                       
          DELETE    WEBEMCA3,KEY63                                              
          RETURN
.
