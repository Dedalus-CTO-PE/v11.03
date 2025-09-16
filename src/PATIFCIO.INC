.
. PATIFCIO    
. --------
. Filename     : patifcaf.dat
.
RSPTIFC1  RESET     KEY25                                                       
          READ      PATIFCA1,KEY25;;                                            
          RETURN
.
RAPTIFC1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIFC1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA1,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIFC1  MOVE      ZERO,OVRCD                                                  
          READKS    PATIFCA1;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIFC1  MOVE      ZERO,OVRCD                                                  
          READKP    PATIFCA1;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIFC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATIFCA1;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          RETURN
.
WRPTIFC1  RESET     KEY25                                                       
          WRITE     PATIFCA1,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          RETURN
.
DEPTIFC1  RESET     KEY25                                                       
          DELETE    PATIFCA1,KEY25                                              
          RETURN
.
RSPTIFC2  RESET     KEY25                                                       
          READ      PATIFCA2,KEY25;;                                            
          RETURN
.
RAPTIFC2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIFC2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA2,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIFC2  MOVE      ZERO,OVRCD                                                  
          READKS    PATIFCA2;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIFC2  MOVE      ZERO,OVRCD                                                  
          READKP    PATIFCA2;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIFC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATIFCA2;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          RETURN
.
WRPTIFC2  RESET     KEY25                                                       
          WRITE     PATIFCA2,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          RETURN
.
DEPTIFC2  RESET     KEY25                                                       
          DELETE    PATIFCA2,KEY25                                              
          RETURN
.
RSPTIFC3  RESET     KEY25                                                       
          READ      PATIFCA3,KEY25;;                                            
          RETURN
.
RAPTIFC3  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA3,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIFC3  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA3,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIFC3  MOVE      ZERO,OVRCD                                                  
          READKS    PATIFCA3;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIFC3  MOVE      ZERO,OVRCD                                                  
          READKP    PATIFCA3;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIFC3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATIFCA3;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          RETURN
.
WRPTIFC3  RESET     KEY25                                                       
          WRITE     PATIFCA3,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          RETURN
.
DEPTIFC3  RESET     KEY25                                                       
          DELETE    PATIFCA3,KEY25                                              
          RETURN
.
RSPTIFC4  RESET     KEY25                                                       
          READ      PATIFCA4,KEY25;;                                            
          RETURN
.
RAPTIFC4  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA4,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIFC4  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PATIFCA4,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIFC4  MOVE      ZERO,OVRCD                                                  
          READKS    PATIFCA4;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIFC4  MOVE      ZERO,OVRCD                                                  
          READKP    PATIFCA4;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIFC4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATIFCA4;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:      
                             PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE                
          RETURN
.
WRPTIFC4  RESET     KEY25                                                       
          WRITE     PATIFCA4,KEY25;PTFCCLTY,PTFCFUND,PTFCHTAB,PTFCRTYP,PTFCCMAT:
                                   PTFCCTYP,PTFCRAMT,PTFCPAMT,PTFCSPRE          
          RETURN
.
DEPTIFC4  RESET     KEY25                                                       
          DELETE    PATIFCA4,KEY25                                              
          RETURN
.
