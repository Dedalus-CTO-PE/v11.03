.
. PATKLGIO    
. --------
. Filename     : patklgaf.dat
.
RSPTKLG1  RESET     KEY19                                                       
          READ      PATKLGA1,KEY19;;                                            
          RETURN
.
RAPTKLG1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKLGA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKLG1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKLGA1,KEY19;PTLGCODE,PTLGKWRD,PTLGSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKLG1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKLGA1;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKLG1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKLGA1;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKLG1                                                                        
          UPDATE    PATKLGA1;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          RETURN
.
WRPTKLG1  RESET     KEY19                                                       
          WRITE     PATKLGA1,KEY19;PTLGCODE,PTLGKWRD,PTLGSPAR                   
          RETURN
.
DEPTKLG1  RESET     KEY19                                                       
          DELETE    PATKLGA1,KEY19                                              
          RETURN
.
RSPTKLG2  RESET     KEY19                                                       
          READ      PATKLGA2,KEY19;;                                            
          RETURN
.
RAPTKLG2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKLGA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKLG2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKLGA2,KEY19;PTLGCODE,PTLGKWRD,PTLGSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKLG2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKLGA2;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKLG2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKLGA2;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKLG2                                                                        
          UPDATE    PATKLGA2;PTLGCODE,PTLGKWRD,PTLGSPAR                         
          RETURN
.
WRPTKLG2  RESET     KEY19                                                       
          WRITE     PATKLGA2,KEY19;PTLGCODE,PTLGKWRD,PTLGSPAR                   
          RETURN
.
DEPTKLG2  RESET     KEY19                                                       
          DELETE    PATKLGA2,KEY19                                              
          RETURN
.
