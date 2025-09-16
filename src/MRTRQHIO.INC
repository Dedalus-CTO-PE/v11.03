.
. MRTRQHIO    
. --------
. Filename     : mrtrqhaf.dat
.
RSMRRQH1  RESET     KEY10                                                       
          READ      MRTRQHR1,KEY10;;                                            
          RETURN
.
RAMRRQH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR1,KEY10;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQH1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQHR1;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQH1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQHR1;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQHR1;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQH1  RESET     KEY10                                                       
          WRITE     MRTRQHR1,KEY10;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          RETURN
.
DEMRRQH1  RESET     KEY10                                                       
          DELETE    MRTRQHR1,KEY10                                              
          RETURN
.
RLMRRQH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQHR1,KEY10;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQH1  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQHR1;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQH1  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQHR1;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQH1  RESET     KEY10                                                       
          UNLOCK    MRTRQHR1                                                    
          RETURN
.
RSMRRQH2  RESET     KEY23                                                       
          READ      MRTRQHR2,KEY23;;                                            
          RETURN
.
RAMRRQH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR2,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQH2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQHR2;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQH2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQHR2;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQHR2;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQH2  RESET     KEY23                                                       
          WRITE     MRTRQHR2,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          RETURN
.
DEMRRQH2  RESET     KEY23                                                       
          DELETE    MRTRQHR2,KEY23                                              
          RETURN
.
RLMRRQH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQHR2,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQH2  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQHR2;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQH2  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQHR2;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQH2  RESET     KEY23                                                       
          UNLOCK    MRTRQHR2                                                    
          RETURN
.
RSMRRQH3  RESET     KEY30                                                       
          READ      MRTRQHR3,KEY30;;                                            
          RETURN
.
RAMRRQH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR3,KEY30;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQH3  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQHR3;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQH3  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQHR3;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQHR3;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQH3  RESET     KEY30                                                       
          WRITE     MRTRQHR3,KEY30;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          RETURN
.
DEMRRQH3  RESET     KEY30                                                       
          DELETE    MRTRQHR3,KEY30                                              
          RETURN
.
RLMRRQH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQHR3,KEY30;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQH3  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQHR3;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQH3  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQHR3;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQH3  RESET     KEY30                                                       
          UNLOCK    MRTRQHR3                                                    
          RETURN
.
RSMRRQH4  RESET     KEY20                                                       
          READ      MRTRQHR4,KEY20;;                                            
          RETURN
.
RAMRRQH4  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR4,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQH4  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR4,KEY20;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQH4  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQHR4;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQH4  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQHR4;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQHR4;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQH4  RESET     KEY20                                                       
          WRITE     MRTRQHR4,KEY20;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          RETURN
.
DEMRRQH4  RESET     KEY20                                                       
          DELETE    MRTRQHR4,KEY20                                              
          RETURN
.
RLMRRQH4  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQHR4,KEY20;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQH4  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQHR4;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQH4  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQHR4;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQH4  RESET     KEY20                                                       
          UNLOCK    MRTRQHR4                                                    
          RETURN
.
RSMRRQH5  RESET     KEY23                                                       
          READ      MRTRQHR5,KEY23;;                                            
          RETURN
.
RAMRRQH5  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR5,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQH5  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQHR5,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQH5  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQHR5;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQH5  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQHR5;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQH5  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQHR5;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQH5  RESET     KEY23                                                       
          WRITE     MRTRQHR5,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          RETURN
.
DEMRRQH5  RESET     KEY23                                                       
          DELETE    MRTRQHR5,KEY23                                              
          RETURN
.
RLMRRQH5  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQHR5,KEY23;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQH5  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQHR5;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQH5  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQHR5;MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:      
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:  
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:  
                        MRRQTRIG,MRRQSPAE                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQH5  RESET     KEY23                                                       
          UNLOCK    MRTRQHR5                                                    
          RETURN
.
. Audit File
.
ASMRRQH   RESET     KEY27
          READ      MRTAUDRQ,KEY27;;
          RETURN
.
ADMRRQH   RESET     KEY27
          MOVE      ZERO,OVRCD
          READ      MRTAUDRQ,KEY27;MRRQAUDD,MRRQAUDT,MRRQAUDR:
                        MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:
                        MRRQTRIG,MRRQSPAE
          GOTO      OVERCOND IF OVER
          RETURN
.
AKMRRQH   MOVE      ZERO,OVRCD
          READKS    MRTAUDRQ;MRRQAUDD,MRRQAUDT,MRRQAUDR:
                        MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:
                        MRRQTRIG,MRRQSPAE
          GOTO      OVERCOND IF OVER
          RETURN
.
APMRRQH   MOVE      ZERO,OVRCD
          READKP    MRTAUDRQ;MRRQAUDD,MRRQAUDT,MRRQAUDR:
                        MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:
                        MRRQTRIG,MRRQSPAE
          GOTO      OVERCOND IF OVER
          RETURN
.
AUMRRQH   UPDATE    MRTAUDRQ;MRRQAUDD,MRRQAUDT,MRRQAUDR:
                        MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:
                        MRRQTRIG,MRRQSPAE
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
ARMRRQH   RESET     KEY27
          WRITE     MRTAUDRQ,KEY27;MRRQAUDD,MRRQAUDT,MRRQAUDR:
                        MRRQRQNO,MRRQDAYE,MRRQTIYM,MRRQDTRQ,MRRQTMRQ:
                        MRRQLOCR,MRRQPERS,MRRQMOVR,MRRQURGY,MRRQCOMM,MRRQHOSC:
                        MRRQUSID,MRRQDTUP,MRRQTMUP,MRRQUSUP,MRRQEXTN,MRRQPAGE:
                        MRRQTRIG,MRRQSPAE
          RETURN
.
AEMRRQH   RESET     KEY27
          DELETE    MRTAUDRQ,KEY27
          RETURN
.
