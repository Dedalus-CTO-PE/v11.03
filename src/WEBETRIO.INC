.
. WEBETRIO    
. --------
. Filename     : webetraf.dat
.
RSWBETR1  RESET     KEY51                                                       
          READ      WEBETRA1,KEY51;;                                            
          RETURN
.
RAWBETR1  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA1,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR1  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA1,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA1;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA1;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA1;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR1  RESET     KEY51                                                       
          WRITE     WEBETRA1,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR1  RESET     KEY51                                                       
          DELETE    WEBETRA1,KEY51                                              
          RETURN
.
RSWBETR2  RESET     KEY51                                                       
          READ      WEBETRA2,KEY51;;                                            
          RETURN
.
RAWBETR2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA2,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA2,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA2;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA2;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA2;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR2  RESET     KEY51                                                       
          WRITE     WEBETRA2,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR2  RESET     KEY51                                                       
          DELETE    WEBETRA2,KEY51                                              
          RETURN
.
RSWBETR3  RESET     KEY51                                                       
          READ      WEBETRA3,KEY51;;                                            
          RETURN
.
RAWBETR3  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA3,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR3  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA3,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA3;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA3;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA3;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR3  RESET     KEY51                                                       
          WRITE     WEBETRA3,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR3  RESET     KEY51                                                       
          DELETE    WEBETRA3,KEY51                                              
          RETURN
.
RSWBETR4  RESET     KEY51                                                       
          READ      WEBETRA4,KEY51;;                                            
          RETURN
.
RAWBETR4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA4,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA4,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA4;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA4;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA4;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR4  RESET     KEY51                                                       
          WRITE     WEBETRA4,KEY51;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR4  RESET     KEY51                                                       
          DELETE    WEBETRA4,KEY51                                              
          RETURN
.
RSWBETR5  RESET     KEY75                                                       
          READ      WEBETRA5,KEY75;;                                            
          RETURN
.
RAWBETR5  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA5,KEY75;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR5  RESET     KEY75                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA5,KEY75;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA5;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA5;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA5;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR5  RESET     KEY75                                                       
          WRITE     WEBETRA5,KEY75;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR5  RESET     KEY75                                                       
          DELETE    WEBETRA5,KEY75                                              
          RETURN
.
RSWBETR6  RESET     KEY87                                                       
          READ      WEBETRA6,KEY87;;                                            
          RETURN
.
RAWBETR6  RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA6,KEY87;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR6  RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA6,KEY87;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA6;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA6;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR6  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA6;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR6  RESET     KEY87                                                       
          WRITE     WEBETRA6,KEY87;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR6  RESET     KEY87                                                       
          DELETE    WEBETRA6,KEY87                                              
          RETURN
.
RSWBETR7  RESET     KEY87                                                       
          READ      WEBETRA7,KEY87;;                                            
          RETURN
.
RAWBETR7  RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA7,KEY87;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBETR7  RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      WEBETRA7,KEY87;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBETR7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBETRA7;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBETR7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBETRA7;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBETR7  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBETRA7;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:      
                             WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:      
                             WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:      
                             WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:      
                             WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR       
          RETURN
.
WRWBETR7  RESET     KEY87                                                       
          WRITE     WEBETRA7,KEY87;WBETSTAT,WBETTYPE,WBETTRID,WBETCDTE,WBETCTIM:
                                   WBETBATN,WBETINVN,WBETUDTE,WBETUTIM,WBETLOCN:
                                   WBETSNID,WBETFDTM,WBETTDTM,WBETEROR,WBETMODL:
                                   WBETMSID,WBETSTRD,WBETSMID,WBETASSN,WBETLODT:
                                   WBETPSTA,WBETREFR,WBETREPS,WBETRTTY,WBETSPAR 
          RETURN
.
DEWBETR7  RESET     KEY87                                                       
          DELETE    WEBETRA7,KEY87                                              
          RETURN
.
