.
. PMSMPRIO    
. --------
. Filename     : pmsmpraf.dat
.
RSPMMPR1  RESET     KEY28                                                       
          READ      PMSMPRA1,KEY28;;                                            
          RETURN
.
RAPMMPR1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMPR1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA1,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RKPMMPR1  MOVE      ZERO,OVRCD
          READKS    PMSMPRA1;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RPPMMPR1  MOVE      ZERO,OVRCD
          READKP    PMSMPRA1;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
UPPMMPR1                                                                        
          MOVE      PMMPCOUN,DPMMPCNT
          UPDATE    PMSMPRA1;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
WRPMMPR1  RESET     KEY28                                                       
          MOVE      PMMPCOUN,DPMMPCNT
          WRITE     PMSMPRA1,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
DEPMMPR1  RESET     KEY28                                                       
          DELETE    PMSMPRA1,KEY28                                              
          RETURN
.
RSPMMPR2  RESET     KEY37                                                       
          READ      PMSMPRA2,KEY37;;                                            
          RETURN
.
RAPMMPR2  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA2,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMPR2  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA2,KEY37;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RKPMMPR2  MOVE      ZERO,OVRCD
          READKS    PMSMPRA2;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RPPMMPR2  MOVE      ZERO,OVRCD
          READKP    PMSMPRA2;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
UPPMMPR2                                                                        
          MOVE      PMMPCOUN,DPMMPCNT
          UPDATE    PMSMPRA2;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
WRPMMPR2  RESET     KEY37                                                       
          MOVE      PMMPCOUN,DPMMPCNT
          WRITE     PMSMPRA2,KEY37;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
DEPMMPR2  RESET     KEY37                                                       
          DELETE    PMSMPRA2,KEY37                                              
          RETURN
.
RSPMMPR3  RESET     KEY28                                                       
          READ      PMSMPRA3,KEY28;;                                            
          RETURN
.
RAPMMPR3  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA3,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMPR3  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMPRA3,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RKPMMPR3  MOVE      ZERO,OVRCD
          READKS    PMSMPRA3;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RPPMMPR3  MOVE      ZERO,OVRCD
          READKP    PMSMPRA3;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
UPPMMPR3                                                                        
          MOVE      PMMPCOUN,DPMMPCNT
          UPDATE    PMSMPRA3;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:      
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
WRPMMPR3  RESET     KEY28                                                       
          MOVE      PMMPCOUN,DPMMPCNT
          WRITE     PMSMPRA3,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
DEPMMPR3  RESET     KEY28                                                       
          DELETE    PMSMPRA3,KEY28                                              
          RETURN
.
RSPMMPR4  RESET     KEY28
          READ      PMSMPRA4,KEY28;;
          RETURN
.
RAPMMPR4  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      PMSMPRA4,KEY28;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMPR4  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      PMSMPRA4,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RKPMMPR4  MOVE      ZERO,OVRCD
          READKS    PMSMPRA4;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
RPPMMPR4  MOVE      ZERO,OVRCD
          READKP    PMSMPRA4;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMMPCNT,PMMPCOUN
          RETURN
.
UPPMMPR4
          MOVE      PMMPCOUN,DPMMPCNT
          UPDATE    PMSMPRA4;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
WRPMMPR4  RESET     KEY28
          MOVE      PMMPCOUN,DPMMPCNT
          WRITE     PMSMPRA4,KEY28;PMMPCCOD,PMMPHFUN,PMMPHFTY,PMMPMPRC,DPMMPCNT:
                        PMMPPAMT,PMMPRAMT,PMMPITMN,PMMPCNID,PMMPSPAR
          RETURN
.
DEPMMPR4  RESET     KEY28
          DELETE    PMSMPRA4,KEY28
          RETURN
