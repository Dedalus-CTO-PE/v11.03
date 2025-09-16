.
. NZPFINIO    
. --------
. Filename     : nzpfinaf.dat
.
RSNZFIN1  RESET     KEY28                                                       
          READ      NZPFINA1,KEY28;;                                            
          RETURN
.
RANZFIN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFINA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZFIN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFINA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZFIN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPFINA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZFIN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPFINA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZFIN1                                                                        
          UPDATE    NZPFINA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZFIN1  RESET     KEY28                                                       
          WRITE     NZPFINA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZFIN1  RESET     KEY28                                                       
          DELETE    NZPFINA1,KEY28                                              
          RETURN
.
RLNZFIN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPFINA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZFIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPFINA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZFIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPFINA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZFIN1  RESET     KEY28                                                       
          UNLOCK    NZPFINA1                                                    
          RETURN
.
RSNZFIN2  RESET     KEY28                                                       
          READ      NZPFINA2,KEY28;;                                            
          RETURN
.
RANZFIN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFINA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZFIN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFINA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZFIN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPFINA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZFIN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPFINA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZFIN2                                                                        
          UPDATE    NZPFINA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZFIN2  RESET     KEY28                                                       
          WRITE     NZPFINA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZFIN2  RESET     KEY28                                                       
          DELETE    NZPFINA2,KEY28                                              
          RETURN
.
RLNZFIN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPFINA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZFIN2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPFINA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZFIN2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPFINA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZFIN2  RESET     KEY28                                                       
          UNLOCK    NZPFINA2                                                    
          RETURN
.
