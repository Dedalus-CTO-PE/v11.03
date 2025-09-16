.
. AUDPATIO    
. --------
. Filename     : audpataf.dat
.
RSAUPAT1  RESET     KEY20                                                       
          READ      AUDPATA1,KEY20;;                                            
          RETURN
.
RAAUPAT1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUPAT1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA1,KEY20;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUPAT1  MOVE      ZERO,OVRCD                                                  
          READKS    AUDPATA1;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUPAT1  MOVE      ZERO,OVRCD                                                  
          READKP    AUDPATA1;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUPAT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDPATA1;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
WRAUPAT1  RESET     KEY20                                                       
          WRITE     AUDPATA1,KEY20;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
DEAUPAT1  RESET     KEY20                                                       
          DELETE    AUDPATA1,KEY20                                              
          RETURN
.
RSAUPAT2  RESET     KEY44                                                       
          READ      AUDPATA2,KEY44;;                                            
          RETURN
.
RAAUPAT2  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA2,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUPAT2  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA2,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUPAT2  MOVE      ZERO,OVRCD                                                  
          READKS    AUDPATA2;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUPAT2  MOVE      ZERO,OVRCD                                                  
          READKP    AUDPATA2;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUPAT2  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDPATA2;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
WRAUPAT2  RESET     KEY44                                                       
          WRITE     AUDPATA2,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
DEAUPAT2  RESET     KEY44                                                       
          DELETE    AUDPATA2,KEY44                                              
          RETURN
.
RSAUPAT3  RESET     KEY44                                                       
          READ      AUDPATA3,KEY44;;                                            
          RETURN
.
RAAUPAT3  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA3,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUPAT3  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA3,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUPAT3  MOVE      ZERO,OVRCD                                                  
          READKS    AUDPATA3;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUPAT3  MOVE      ZERO,OVRCD                                                  
          READKP    AUDPATA3;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUPAT3  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDPATA3;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
WRAUPAT3  RESET     KEY44                                                       
          WRITE     AUDPATA3,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
DEAUPAT3  RESET     KEY44                                                       
          DELETE    AUDPATA3,KEY44                                              
          RETURN
.
RSAUPAT4  RESET     KEY100                                                      
          READ      AUDPATA4,KEY100;;                                           
          RETURN
.
RAAUPAT4  RESET     KEY100                                                      
          MOVE      ZERO,OVRCD
          READ      AUDPATA4,KEY100;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUPAT4  RESET     KEY100                                                      
          MOVE      ZERO,OVRCD
          READ      AUDPATA4,KEY100;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:    
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUPAT4  MOVE      ZERO,OVRCD                                                  
          READKS    AUDPATA4;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUPAT4  MOVE      ZERO,OVRCD                                                  
          READKP    AUDPATA4;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUPAT4  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDPATA4;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
WRAUPAT4  RESET     KEY100                                                      
          WRITE     AUDPATA4,KEY100;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:    
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
DEAUPAT4  RESET     KEY100                                                      
          DELETE    AUDPATA4,KEY100                                             
          RETURN
.
RSAUPAT5  RESET     KEY44                                                       
          READ      AUDPATA5,KEY44;;                                            
          RETURN
.
RAAUPAT5  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA5,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUPAT5  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      AUDPATA5,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUPAT5  MOVE      ZERO,OVRCD                                                  
          READKS    AUDPATA5;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUPAT5  MOVE      ZERO,OVRCD                                                  
          READKP    AUDPATA5;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUPAT5  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDPATA5;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:           
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
WRAUPAT5  RESET     KEY44                                                       
          WRITE     AUDPATA5,KEY44;AUPAUNQ,AUPAURN,AUPAVIS,AUPADAT,AUPATIM:     
                        AUPAOSU,AUPADBU,AUPAMOD,AUPAACT,AUPACLI,AUPAUID:        
                        AUPAPRG,AUPAVER,AUPADES,AUPAOLD,AUPANEW,AUPASPA         
          RETURN
.
DEAUPAT5  RESET     KEY44                                                       
          DELETE    AUDPATA5,KEY44                                              
          RETURN
.
