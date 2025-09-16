.
. PATATRIO    
. --------
. Filename     : patatraf.dat
.
RSPTATR1  RESET     KEY35                                                       
          READ      PATATRA1,KEY35;;                                            
          RETURN
.
RAPTATR1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTATR1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA1,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTATR1  MOVE      ZERO,OVRCD                                                  
          READKS    PATATRA1;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTATR1  MOVE      ZERO,OVRCD                                                  
          READKP    PATATRA1;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTATR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATATRA1;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          RETURN
.
WRPTATR1  RESET     KEY35                                                       
          WRITE     PATATRA1,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          RETURN
.
DEPTATR1  RESET     KEY35                                                       
          DELETE    PATATRA1,KEY35                                              
          RETURN
.
RSPTATR2  RESET     KEY35                                                       
          READ      PATATRA2,KEY35;;                                            
          RETURN
.
RAPTATR2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTATR2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA2,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTATR2  MOVE      ZERO,OVRCD                                                  
          READKS    PATATRA2;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTATR2  MOVE      ZERO,OVRCD                                                  
          READKP    PATATRA2;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTATR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATATRA2;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          RETURN
.
WRPTATR2  RESET     KEY35                                                       
          WRITE     PATATRA2,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          RETURN
.
DEPTATR2  RESET     KEY35                                                       
          DELETE    PATATRA2,KEY35                                              
          RETURN
.
RSPTATR3  RESET     KEY35                                                       
          READ      PATATRA3,KEY35;;                                            
          RETURN
.
RAPTATR3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTATR3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA3,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTATR3  MOVE      ZERO,OVRCD                                                  
          READKS    PATATRA3;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTATR3  MOVE      ZERO,OVRCD                                                  
          READKP    PATATRA3;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTATR3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATATRA3;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          RETURN
.
WRPTATR3  RESET     KEY35                                                       
          WRITE     PATATRA3,KEY35;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          RETURN
.
DEPTATR3  RESET     KEY35                                                       
          DELETE    PATATRA3,KEY35                                              
          RETURN
.
RSPTATR4  RESET     KEY51                                                       
          READ      PATATRA4,KEY51;;                                            
          RETURN
.
RAPTATR4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA4,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTATR4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      PATATRA4,KEY51;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTATR4  MOVE      ZERO,OVRCD                                                  
          READKS    PATATRA4;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTATR4  MOVE      ZERO,OVRCD                                                  
          READKP    PATATRA4;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTATR4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATATRA4;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:      
                             PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:      
                             PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:      
                             PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:      
                             PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:      
                             PTARFTME,PTARFUSR,PTARSPAR                         
          RETURN
.
WRPTATR4  RESET     KEY51                                                       
          WRITE     PATATRA4,KEY51;PTARURNO,PTARVISN,PTARDATE,PTARTIME,PTARTYPE:
                                   PTARVAL1,PTARVAL2,PTARVAL3,PTARVAL4,PTARCOD1:
                                   PTARCOD2,PTARCOD3,PTARCOD4,PTARTXT1,PTARTXT2:
                                   PTARTXT3,PTARTXT4,PTARDELR,PTARCUSR,PTARCDTE:
                                   PTARCTME,PTARUUSR,PTARUDTE,PTARUTME,PTARFDTE:
                                   PTARFTME,PTARFUSR,PTARSPAR                   
          RETURN
.
DEPTATR4  RESET     KEY51                                                       
          DELETE    PATATRA4,KEY51                                              
          RETURN
.
