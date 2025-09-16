.
. PATKEOIO    
. --------
. Filename     : patkeoaf.dat
.
RSPTKEO1  RESET     KEY22                                                       
          READ      PATKEOA1,KEY22;;                                            
          RETURN
.
RAPTKEO1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKEO1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA1,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKEO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKEOA1;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKEO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKEOA1;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKEO1                                                                        
          UPDATE    PATKEOA1;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          RETURN
.
WRPTKEO1  RESET     KEY22                                                       
          WRITE     PATKEOA1,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          RETURN
.
DEPTKEO1  RESET     KEY22                                                       
          DELETE    PATKEOA1,KEY22                                              
          RETURN
.
RSPTKEO2  RESET     KEY22                                                       
          READ      PATKEOA2,KEY22;;                                            
          RETURN
.
RAPTKEO2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKEO2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA2,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKEO2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKEOA2;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKEO2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKEOA2;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKEO2                                                                        
          UPDATE    PATKEOA2;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          RETURN
.
WRPTKEO2  RESET     KEY22                                                       
          WRITE     PATKEOA2,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          RETURN
.
DEPTKEO2  RESET     KEY22                                                       
          DELETE    PATKEOA2,KEY22                                              
          RETURN
.
RSPTKEO3  RESET     KEY22                                                       
          READ      PATKEOA3,KEY22;;                                            
          RETURN
.
RAPTKEO3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA3,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKEO3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATKEOA3,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKEO3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKEOA3;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKEO3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKEOA3;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKEO3                                                                        
          UPDATE    PATKEOA3;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR                
          RETURN
.
WRPTKEO3  RESET     KEY22                                                       
          WRITE     PATKEOA3,KEY22;PTKOTYPE,PTKOCODE,PTKOKWRD,PTKOSPAR          
          RETURN
.
DEPTKEO3  RESET     KEY22                                                       
          DELETE    PATKEOA3,KEY22                                              
          RETURN
.
