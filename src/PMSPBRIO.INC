.
. PMSPBRIO    
. --------
. Filename     : pmspbraf.dat
.
RSPMPBR1  RESET     KEY22                                                       
          READ      PMSPBRA1,KEY22;;                                            
          RETURN
.
RAPMPBR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPBR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA1,KEY22;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPBR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPBRA1;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPBR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPBRA1;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPBR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPBRA1;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
WRPMPBR1  RESET     KEY22                                                       
          WRITE     PMSPBRA1,KEY22;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
DEPMPBR1  RESET     KEY22                                                       
          DELETE    PMSPBRA1,KEY22                                              
          RETURN
.
RSPMPBR2  RESET     KEY31                                                       
          READ      PMSPBRA2,KEY31;;                                            
          RETURN
.
RAPMPBR2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPBR2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA2,KEY31;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPBR2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPBRA2;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPBR2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPBRA2;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPBR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPBRA2;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
WRPMPBR2  RESET     KEY31                                                       
          WRITE     PMSPBRA2,KEY31;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
DEPMPBR2  RESET     KEY31                                                       
          DELETE    PMSPBRA2,KEY31                                              
          RETURN
.
RSPMPBR3  RESET     KEY23                                                       
          READ      PMSPBRA3,KEY23;;                                            
          RETURN
.
RAPMPBR3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPBR3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA3,KEY23;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPBR3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPBRA3;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPBR3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPBRA3;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPBR3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPBRA3;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
WRPMPBR3  RESET     KEY23                                                       
          WRITE     PMSPBRA3,KEY23;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
DEPMPBR3  RESET     KEY23                                                       
          DELETE    PMSPBRA3,KEY23                                              
          RETURN
.
RSPMPBR4  RESET     KEY26                                                       
          READ      PMSPBRA4,KEY26;;                                            
          RETURN
.
RAPMPBR4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA4,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPBR4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPBRA4,KEY26;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPBR4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPBRA4;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPBR4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPBRA4;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPBR4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPBRA4;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:      
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
WRPMPBR4  RESET     KEY26                                                       
          WRITE     PMSPBRA4,KEY26;PMPBADMN,PMPBCLTY,PMPBDEFT,PMPBCNTR,PMPBICNT:
                        PMPBITEM,PMPBEFDT,PMPBETDT,PMPBREGM,PMPBMAXB,PMPBMAXD:  
                        PMPBCUID,PMPBCDAT,PMPBCTIM,PMPBUUID,PMPBUDAT,PMPBUTIM:  
                        PMPBSPAR                                                
          RETURN
.
DEPMPBR4  RESET     KEY26                                                       
          DELETE    PMSPBRA4,KEY26                                              
          RETURN
.
