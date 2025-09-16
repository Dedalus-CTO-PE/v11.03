.
. NZPFIGIO    
. --------
. Filename     : nzpfigaf.dat
.
RSNZFIG1  RESET     KEY28                                                       
          READ      NZPFIGA1,KEY28;;                                            
          RETURN
.
RANZFIG1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFIGA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZFIG1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFIGA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZFIG1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPFIGA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZFIG1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPFIGA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZFIG1                                                                        
          UPDATE    NZPFIGA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZFIG1  RESET     KEY28                                                       
          WRITE     NZPFIGA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZFIG1  RESET     KEY28                                                       
          DELETE    NZPFIGA1,KEY28                                              
          RETURN
.
RLNZFIG1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPFIGA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZFIG1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPFIGA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZFIG1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPFIGA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZFIG1  RESET     KEY28                                                       
          UNLOCK    NZPFIGA1                                                    
          RETURN
.
RSNZFIG2  RESET     KEY28                                                       
          READ      NZPFIGA2,KEY28;;                                            
          RETURN
.
RANZFIG2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFIGA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZFIG2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPFIGA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZFIG2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPFIGA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZFIG2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPFIGA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZFIG2                                                                        
          UPDATE    NZPFIGA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZFIG2  RESET     KEY28                                                       
          WRITE     NZPFIGA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZFIG2  RESET     KEY28                                                       
          DELETE    NZPFIGA2,KEY28                                              
          RETURN
.
RLNZFIG2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPFIGA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZFIG2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPFIGA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZFIG2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPFIGA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZFIG2  RESET     KEY28                                                       
          UNLOCK    NZPFIGA2                                                    
          RETURN
.
