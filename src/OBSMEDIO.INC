.
. OBSMEDIO    
. --------
. Filename     : obsmedaf.dat
.
RSOBMED1  RESET     KEY11                                                       
          READ      OBSMEDA1,KEY11;;                                            
          RETURN
.
RAOBMED1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMEDA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBMED1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMEDA1,KEY11;OBMEVISN,OBMECNTR,OBMEDRUG,OBMEDOSF,OBMEDOSE:
                        OBMEFREQ,OBMEDURA,OBMEQUAN,OBMEINST,OBMEMCOD,OBMEREAS:  
                        OBMESTAT,OBMECHGD,OBMECHGR,OBMENOTE,OBMESCDT,OBMEDRBR:  
                        OBMESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBMED1  MOVE      ZERO,OVRCD                                                  
          READKS    OBSMEDA1;OBMEVISN,OBMECNTR,OBMEDRUG,OBMEDOSF,OBMEDOSE:      
                        OBMEFREQ,OBMEDURA,OBMEQUAN,OBMEINST,OBMEMCOD,OBMEREAS:  
                        OBMESTAT,OBMECHGD,OBMECHGR,OBMENOTE,OBMESCDT,OBMEDRBR:  
                        OBMESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBMED1  MOVE      ZERO,OVRCD                                                  
          READKP    OBSMEDA1;OBMEVISN,OBMECNTR,OBMEDRUG,OBMEDOSF,OBMEDOSE:      
                        OBMEFREQ,OBMEDURA,OBMEQUAN,OBMEINST,OBMEMCOD,OBMEREAS:  
                        OBMESTAT,OBMECHGD,OBMECHGR,OBMENOTE,OBMESCDT,OBMEDRBR:  
                        OBMESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBMED1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OBSMEDA1;OBMEVISN,OBMECNTR,OBMEDRUG,OBMEDOSF,OBMEDOSE:      
                        OBMEFREQ,OBMEDURA,OBMEQUAN,OBMEINST,OBMEMCOD,OBMEREAS:  
                        OBMESTAT,OBMECHGD,OBMECHGR,OBMENOTE,OBMESCDT,OBMEDRBR:  
                        OBMESPAR                                                
          RETURN
.
WROBMED1  RESET     KEY11                                                       
          WRITE     OBSMEDA1,KEY11;OBMEVISN,OBMECNTR,OBMEDRUG,OBMEDOSF,OBMEDOSE:
                        OBMEFREQ,OBMEDURA,OBMEQUAN,OBMEINST,OBMEMCOD,OBMEREAS:  
                        OBMESTAT,OBMECHGD,OBMECHGR,OBMENOTE,OBMESCDT,OBMEDRBR:  
                        OBMESPAR                                                
          RETURN
.
DEOBMED1  RESET     KEY11                                                       
          DELETE    OBSMEDA1,KEY11                                              
          RETURN
.
