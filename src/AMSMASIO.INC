.
. AMSMASIO    
. --------
. Filename     : amsmasaf.dat
.
RSAMMA1   RESET     KEY14                                                       
          READ      AMSMASA1,KEY14;;                                            
          RETURN
.
RAAMMA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA1,KEY14;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA1;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA1;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA1                                                                         
          UPDATE    AMSMASA1;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA1   RESET     KEY14                                                       
          WRITE     AMSMASA1,KEY14;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA1   RESET     KEY14                                                       
          DELETE    AMSMASA1,KEY14                                              
          RETURN
.
RLAMMA1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA1,KEY14;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA1;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA1;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA1   RESET     KEY14                                                       
          UNLOCK    AMSMASA1                                                    
          RETURN
.
RSAMMA2   RESET     KEY23                                                       
          READ      AMSMASA2,KEY23;;                                            
          RETURN
.
RAAMMA2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA2,KEY23;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA2;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA2;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA2                                                                         
          UPDATE    AMSMASA2;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA2   RESET     KEY23                                                       
          WRITE     AMSMASA2,KEY23;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA2   RESET     KEY23                                                       
          DELETE    AMSMASA2,KEY23                                              
          RETURN
.
RLAMMA2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA2,KEY23;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA2;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA2;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA2   RESET     KEY23                                                       
          UNLOCK    AMSMASA2                                                    
          RETURN
.
RSAMMA3   RESET     KEY17                                                       
          READ      AMSMASA3,KEY17;;                                            
          RETURN
.
RAAMMA3   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA3,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA3   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA3,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA3;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA3;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA3                                                                         
          UPDATE    AMSMASA3;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA3   RESET     KEY17                                                       
          WRITE     AMSMASA3,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA3   RESET     KEY17                                                       
          DELETE    AMSMASA3,KEY17                                              
          RETURN
.
RLAMMA3   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA3,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA3;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA3;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA3   RESET     KEY17                                                       
          UNLOCK    AMSMASA3                                                    
          RETURN
.
RSAMMA4   RESET     KEY17                                                       
          READ      AMSMASA4,KEY17;;                                            
          RETURN
.
RAAMMA4   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA4,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA4   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA4,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA4                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA4;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA4                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA4;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA4                                                                         
          UPDATE    AMSMASA4;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA4   RESET     KEY17                                                       
          WRITE     AMSMASA4,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA4   RESET     KEY17                                                       
          DELETE    AMSMASA4,KEY17                                              
          RETURN
.
RLAMMA4   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA4,KEY17;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA4;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA4;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA4   RESET     KEY17                                                       
          UNLOCK    AMSMASA4                                                    
          RETURN
.
RSAMMA5   RESET     KEY19                                                       
          READ      AMSMASA5,KEY19;;                                            
          RETURN
.
RAAMMA5   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA5,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA5   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA5,KEY19;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA5                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA5;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA5                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA5;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA5                                                                         
          UPDATE    AMSMASA5;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA5   RESET     KEY19                                                       
          WRITE     AMSMASA5,KEY19;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA5   RESET     KEY19                                                       
          DELETE    AMSMASA5,KEY19                                              
          RETURN
.
RLAMMA5   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA5,KEY19;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA5;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA5;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA5   RESET     KEY19                                                       
          UNLOCK    AMSMASA5                                                    
          RETURN
.
RSAMMA6   RESET     KEY22                                                       
          READ      AMSMASA6,KEY22;;                                            
          RETURN
.
RAAMMA6   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA6,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA6   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA6,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA6                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA6;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA6                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA6;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA6                                                                         
          UPDATE    AMSMASA6;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA6   RESET     KEY22                                                       
          WRITE     AMSMASA6,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA6   RESET     KEY22                                                       
          DELETE    AMSMASA6,KEY22                                              
          RETURN
.
RLAMMA6   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA6,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA6                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA6;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA6                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA6;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA6   RESET     KEY22                                                       
          UNLOCK    AMSMASA6                                                    
          RETURN
.
RSAMMA7   RESET     KEY22                                                       
          READ      AMSMASA7,KEY22;;                                            
          RETURN
.
RAAMMA7   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA7,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA7   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA7,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA7                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA7;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA7                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA7;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA7                                                                         
          UPDATE    AMSMASA7;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA7   RESET     KEY22                                                       
          WRITE     AMSMASA7,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA7   RESET     KEY22                                                       
          DELETE    AMSMASA7,KEY22                                              
          RETURN
.
RLAMMA7   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA7,KEY22;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA7                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA7;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA7                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA7;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA7   RESET     KEY22                                                       
          UNLOCK    AMSMASA7                                                    
          RETURN
.
RSAMMA8   RESET     KEY18                                                       
          READ      AMSMASA8,KEY18;;                                            
          RETURN
.
RAAMMA8   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA8,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMMA8   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      AMSMASA8,KEY18;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMMA8                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSMASA8;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMMA8                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSMASA8;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMMA8                                                                         
          UPDATE    AMSMASA8;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMMA8   RESET     KEY18                                                       
          WRITE     AMSMASA8,KEY18;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
DEAMMA8   RESET     KEY18                                                       
          DELETE    AMSMASA8,KEY18                                              
          RETURN
.
RLAMMA8   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     AMSMASA8,KEY18;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:     
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMMA8                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSMASA8;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMMA8                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSMASA8;AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMMA8   RESET     KEY18                                                       
          UNLOCK    AMSMASA8                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAAMMA00
          MOVE      "    3",AUDTSECT
          MOVE      " 10",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAAMMA99 IF NOT EQUAL
.
          PACK      AMMAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",AMMAAUDD
          CLOCK     TIME,AMMAAUDT
          MOVE      PORT,AMMAAUDP
          LOAD      AMMAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,AMMAAUDS
          MOVE      PASSCODE,AMMAAUDO
          PACK      KEY19,AMMAAUDD,AMMAAUDT,AMMAAUDP,AMMAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWAMMA
WAAMMA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAAMMA00
          MOVE      "    3",AUDTSECT
          MOVE      " 10",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAAMMA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADAMMA
DAAMMA99  RETURN
ASAMMA    RESET     KEY19                                                       
          READ      AMSAUDMA,KEY19;;                                            
          RETURN
.
AKAMMA                                                                          
          MOVE      ZERO,OVRCD
          READKS    AMSAUDMA;AMMAAUDD,AMMAAUDT,AMMAAUDP,AMMAAUDR,AMMAAUDS:      
                    AMMAAUDO,AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUAMMA                                                                          
          UPDATE    AMSAUDMA;AMMAAUDD,AMMAAUDT,AMMAAUDP,AMMAAUDR,AMMAAUDS:      
                    AMMAAUDO,AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
AWAMMA    RESET     KEY19                                                       
          WRITE     AMSAUDMA,KEY19;AMMAAUDD,AMMAAUDT,AMMAAUDP,AMMAAUDR,AMMAAUDS:
                    AMMAAUDO,AMMAREG,AMMAASS,AMMADES,AMMATYP,AMMADPT:           
                        AMMABLD,AMMALOC,AMMALCM,AMMASDT,AMMAVDT,AMMARVT:        
                        AMMASEC,AMMALEA,AMMAREN,AMMAPRI,AMMARDT,AMMAADT:        
                        AMMATDT,AMMATAD,AMMAAAD,AMMAGIC,AMMAAQD,AMMAAYR:        
                        AMMAAPR,AMMASOF,AMMADDT,AMMADYR,AMMADPR,AMMADRF:        
                        AMMADTY,AMMADVA,AMMAAQO,AMMAAQI,AMMASER,AMMACST:        
                        AMMAMANC,AMMAMANN,AMMAMANP,AMMASUPC,AMMASUPN,AMMASUPP:  
                        AMMARVR,AMMAUA1,AMMAUA2,AMMAUA3,AMMAUR1,AMMAUR2:        
                        AMMAUR3,AMMAUR4,AMMAUD1,AMMAUD2,AMMAUD3,AMMAUD4:        
                        AMMAUC1,AMMAUC2,AMMAUC3,AMMAUC4,AMMAUY1,AMMAUY2:        
                        AMMAUY3,AMMAUY4,AMMASPA                                 
          RETURN
.
ADAMMA    RESET     KEY19                                                       
          DELETE    AMSAUDMA,KEY19;                                             
          RETURN
.
