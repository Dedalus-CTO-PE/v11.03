.
. PATCMHIO    
. --------
. Filename     : patcmhaf.dat
.
RSPTCMH1  RESET     KEY16                                                       
          READ      PATCMHA1,KEY16;;                                            
          RETURN
.
RAPTCMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMHA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMHA1,KEY16;PTCMOURN,PTCMNURN,PTCMSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCMHA1;PTCMOURN,PTCMNURN,PTCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCMHA1;PTCMOURN,PTCMNURN,PTCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCMH1                                                                        
          UPDATE    PATCMHA1;PTCMOURN,PTCMNURN,PTCMSPAR                         
          RETURN
.
WRPTCMH1  RESET     KEY16                                                       
          WRITE     PATCMHA1,KEY16;PTCMOURN,PTCMNURN,PTCMSPAR                   
          RETURN
.
DEPTCMH1  RESET     KEY16                                                       
          DELETE    PATCMHA1,KEY16                                              
          RETURN
.
