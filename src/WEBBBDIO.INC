.
. WEBBBDIO    
. --------
. Filename     : webbbdaf.dat
.
RSWBBBD1  RESET     KEY33                                                       
          READ      WEBBBDA1,KEY33;;                                            
          RETURN
.
RAWBBBD1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBD1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA1,KEY33;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBDA1;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBDA1;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBDA1;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          RETURN
.
WRWBBBD1  RESET     KEY33                                                       
          WRITE     WEBBBDA1,KEY33;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          RETURN
.
DEWBBBD1  RESET     KEY33                                                       
          DELETE    WEBBBDA1,KEY33                                              
          RETURN
.
RSWBBBD2  RESET     KEY57                                                       
          READ      WEBBBDA2,KEY57;;                                            
          RETURN
.
RAWBBBD2  RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA2,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBD2  RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA2,KEY57;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBDA2;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBDA2;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBDA2;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          RETURN
.
WRWBBBD2  RESET     KEY57                                                       
          WRITE     WEBBBDA2,KEY57;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          RETURN
.
DEWBBBD2  RESET     KEY57                                                       
          DELETE    WEBBBDA2,KEY57                                              
          RETURN
.
RSWBBBD3  RESET     KEY69                                                       
          READ      WEBBBDA3,KEY69;;                                            
          RETURN
.
RAWBBBD3  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA3,KEY69;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBD3  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA3,KEY69;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBDA3;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBDA3;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBDA3;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          RETURN
.
WRWBBBD3  RESET     KEY69                                                       
          WRITE     WEBBBDA3,KEY69;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          RETURN
.
DEWBBBD3  RESET     KEY69                                                       
          DELETE    WEBBBDA3,KEY69                                              
          RETURN
.
RSWBBBD4  RESET     KEY33                                                       
          READ      WEBBBDA4,KEY33;;                                            
          RETURN
.
RAWBBBD4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA4,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBD4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBDA4,KEY33;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBD4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBDA4;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBD4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBDA4;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBDA4;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:      
                             WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:      
                             WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:      
                             WBBDSPAR                                           
          RETURN
.
WRWBBBD4  RESET     KEY33                                                       
          WRITE     WEBBBDA4,KEY33;WBBDCLID,WBBDRPTC,WBBDCLBP,WBBDCLCA,WBBDSRVP:
                                   WBBDSTAT,WBBDTRID,WBBDMSID,WBBDRKEY,WBBDCUID:
                                   WBBDCDAT,WBBDCTIM,WBBDUUID,WBBDUDAT,WBBDUTIM:
                                   WBBDSPAR                                     
          RETURN
.
DEWBBBD4  RESET     KEY33                                                       
          DELETE    WEBBBDA4,KEY33                                              
          RETURN
.
