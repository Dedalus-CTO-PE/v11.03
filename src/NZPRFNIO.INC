.
. NZPRFNIO    
. --------
. Filename     : nzprfnaf.dat
.
RSNZRFN1  RESET     KEY28                                                       
          READ      NZPRFNA1,KEY28;;                                            
          RETURN
.
RANZRFN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRFNA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRFN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRFNA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRFN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRFNA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRFN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRFNA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRFN1                                                                        
          UPDATE    NZPRFNA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZRFN1  RESET     KEY28                                                       
          WRITE     NZPRFNA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZRFN1  RESET     KEY28                                                       
          DELETE    NZPRFNA1,KEY28                                              
          RETURN
.
RLNZRFN1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPRFNA1,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZRFN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPRFNA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZRFN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPRFNA1;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZRFN1  RESET     KEY28                                                       
          UNLOCK    NZPRFNA1                                                    
          RETURN
.
RSNZRFN2  RESET     KEY28                                                       
          READ      NZPRFNA2,KEY28;;                                            
          RETURN
.
RANZRFN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRFNA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRFN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRFNA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRFN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRFNA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRFN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRFNA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRFN2                                                                        
          UPDATE    NZPRFNA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZRFN2  RESET     KEY28                                                       
          WRITE     NZPRFNA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          RETURN
.
DENZRFN2  RESET     KEY28                                                       
          DELETE    NZPRFNA2,KEY28                                              
          RETURN
.
RLNZRFN2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     NZPRFNA2,KEY28;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZRFN2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPRFNA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZRFN2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPRFNA2;NZFIHOSP,NZFISYST,NZFISITE,NZFIYEAR,NZFITYPE:      
                        NZFICODE,NZFIPERD,NZFIMTH1,NZFIMTH2,NZFIMTH3,NZFIMTH4:  
                        NZFIMTH5,NZFIMTH6,NZFIMTH7,NZFIMTH8,NZFIMTH9,NZFIMT10:  
                        NZFIMT11,NZFIMT12,NZFIMT13,NZFILSYR,NZFISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZRFN2  RESET     KEY28                                                       
          UNLOCK    NZPRFNA2                                                    
          RETURN
.
