.
. WEBRSPIO    
. --------
. Filename     : webrspaf.dat
.
RSWBRSP1  RESET     KEY8                                                        
          READ      WEBRSPA1,KEY8;;                                             
          RETURN
.
RAWBRSP1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRSPA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRSP1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRSPA1,KEY8;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME: 
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRSP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRSPA1;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRSP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRSPA1;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRSP1                                                                        
          UPDATE    WEBRSPA1;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRSP1  RESET     KEY8                                                        
          WRITE     WEBRSPA1,KEY8;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME: 
                        WBRSDESC,WBRSSPAR                                       
          RETURN
.
DEWBRSP1  RESET     KEY8                                                        
          DELETE    WEBRSPA1,KEY8                                               
          RETURN
.
RLWBRSP1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WEBRSPA1,KEY8;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME: 
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRSPA1;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRSPA1;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRSP1  RESET     KEY8                                                        
          UNLOCK    WEBRSPA1                                                    
          RETURN
.
RSWBRSP2  RESET     KEY16                                                       
          READ      WEBRSPA2,KEY16;;                                            
          RETURN
.
RAWBRSP2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSPA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRSP2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSPA2,KEY16;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRSP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRSPA2;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRSP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRSPA2;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRSP2                                                                        
          UPDATE    WEBRSPA2;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRSP2  RESET     KEY16                                                       
          WRITE     WEBRSPA2,KEY16;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          RETURN
.
DEWBRSP2  RESET     KEY16                                                       
          DELETE    WEBRSPA2,KEY16                                              
          RETURN
.
RLWBRSP2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRSPA2,KEY16;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRSP2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRSPA2;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRSP2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRSPA2;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRSP2  RESET     KEY16                                                       
          UNLOCK    WEBRSPA2                                                    
          RETURN
.
RSWBRSP3  RESET     KEY26                                                       
          READ      WEBRSPA3,KEY26;;                                            
          RETURN
.
RAWBRSP3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSPA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRSP3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSPA3,KEY26;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRSP3                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRSPA3;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRSP3                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRSPA3;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRSP3                                                                        
          UPDATE    WEBRSPA3;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRSP3  RESET     KEY26                                                       
          WRITE     WEBRSPA3,KEY26;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          RETURN
.
DEWBRSP3  RESET     KEY26                                                       
          DELETE    WEBRSPA3,KEY26                                              
          RETURN
.
RLWBRSP3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRSPA3,KEY26;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRSP3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRSPA3;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRSP3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRSPA3;WBRSSPID,WBRSUSID,WBRSPRID,WBRSDATE,WBRSTIME:      
                        WBRSDESC,WBRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRSP3  RESET     KEY26                                                       
          UNLOCK    WEBRSPA3                                                    
          RETURN
.
