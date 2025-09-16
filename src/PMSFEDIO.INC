.
. PMSFEDIO    
. --------
. Filename     : pmsfedaf.dat
.
RSPMFED1  RESET     KEY12                                                       
          READ      PMSFEDA1,KEY12;;                                            
          RETURN
.
RAPMFED1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFEDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFED1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFEDA1,KEY12;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFED1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSFEDA1;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFED1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSFEDA1;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFED1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSFEDA1;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          RETURN
.
WRPMFED1  RESET     KEY12                                                       
          WRITE     PMSFEDA1,KEY12;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          RETURN
.
DEPMFED1  RESET     KEY12                                                       
          DELETE    PMSFEDA1,KEY12                                              
          RETURN
.
RSPMFED2  RESET     KEY20                                                       
          READ      PMSFEDA2,KEY20;;                                            
          RETURN
.
RAPMFED2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFEDA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFED2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFEDA2,KEY20;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFED2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSFEDA2;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFED2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSFEDA2;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFED2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSFEDA2;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:      
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          RETURN
.
WRPMFED2  RESET     KEY20                                                       
          WRITE     PMSFEDA2,KEY20;PMFDQUOT,PMFDURNO,PMFDNONS,PMFDADAT,PMFDHFUN:
                        PMFDHFTB,PMFDCMCD,PMFDCLTY,PMFDBDTY,PMFDATYP,PMFDAGST:  
                        PMFDBDT2,PMFDBDT3,PMFDBDT4,PMFDBDT5,PMFDNDS2,PMFDNDS3:  
                        PMFDNDS4,PMFDNDS5,PMFDCMN1,PMFDCMN2,PMFDCMN3,PMFDCMN4:  
                        PMFDCMN5,PMFDXCSS,PMFDEXPD,PMFDCDAT,PMFDCTIM,PMFDCUID:  
                        PMFDDOCT,PMFDACHR,PMFDUBAS,PMFDSPAR                     
          RETURN
.
DEPMFED2  RESET     KEY20                                                       
          DELETE    PMSFEDA2,KEY20                                              
          RETURN
.
