.
. PATMBFIO    
. --------
. Filename     : patmbfaf.dat
.
RSPTMBF1  RESET     KEY12                                                       
          READ      PATMBFA1,KEY12;;                                            
          RETURN
.
RAPTMBF1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMBF1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA1,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMBF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMBFA1;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMBF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMBFA1;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMBF1                                                                        
          UPDATE    PATMBFA1;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          RETURN
.
WRPTMBF1  RESET     KEY12                                                       
          WRITE     PATMBFA1,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          RETURN
.
DEPTMBF1  RESET     KEY12                                                       
          DELETE    PATMBFA1,KEY12                                              
          RETURN
.
RSPTMBF2  RESET     KEY12                                                       
          READ      PATMBFA2,KEY12;;                                            
          RETURN
.
RAPTMBF2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMBF2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA2,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMBF2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMBFA2;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMBF2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMBFA2;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMBF2                                                                        
          UPDATE    PATMBFA2;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          RETURN
.
WRPTMBF2  RESET     KEY12                                                       
          WRITE     PATMBFA2,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          RETURN
.
DEPTMBF2  RESET     KEY12                                                       
          DELETE    PATMBFA2,KEY12                                              
          RETURN
.
RSPTMBF3  RESET     KEY12                                                       
          READ      PATMBFA3,KEY12;;                                            
          RETURN
.
RAPTMBF3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA3,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMBF3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA3,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMBF3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMBFA3;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMBF3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMBFA3;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMBF3                                                                        
          UPDATE    PATMBFA3;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          RETURN
.
WRPTMBF3  RESET     KEY12                                                       
          WRITE     PATMBFA3,KEY12;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          RETURN
.
DEPTMBF3  RESET     KEY12                                                       
          DELETE    PATMBFA3,KEY12                                              
          RETURN
.
RSPTMBF4  RESET     KEY18                                                       
          READ      PATMBFA4,KEY18;;                                            
          RETURN
.
RAPTMBF4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMBF4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATMBFA4,KEY18;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMBF4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMBFA4;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMBF4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMBFA4;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMBF4                                                                        
          UPDATE    PATMBFA4;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:      
                        PTMBSPAR                                                
          RETURN
.
WRPTMBF4  RESET     KEY18                                                       
          WRITE     PATMBFA4,KEY18;PTMBCLAM,PTMBHFND,PTMBATYP,PTMBCNTR,PTMBUSID:
                        PTMBSPAR                                                
          RETURN
.
DEPTMBF4  RESET     KEY18                                                       
          DELETE    PATMBFA4,KEY18                                              
          RETURN
.
