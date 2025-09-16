.
. PMSPTDIO    
. --------
. Filename     : pmsptdaf.dat
.
RSPMPTD1  RESET     KEY30                                                       
          READ      PMSPTDA1,KEY30;;                                            
          RETURN
.
RAPMPTD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA1,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTDA1;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTDA1;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTD1                                                                        
          UPDATE    PMSPTDA1;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
WRPMPTD1  RESET     KEY30                                                       
          WRITE     PMSPTDA1,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
DEPMPTD1  RESET     KEY30                                                       
          DELETE    PMSPTDA1,KEY30                                              
          RETURN
.
RSPMPTD2  RESET     KEY30                                                       
          READ      PMSPTDA2,KEY30;;                                            
          RETURN
.
RAPMPTD2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTD2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA2,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTDA2;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTDA2;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTD2                                                                        
          UPDATE    PMSPTDA2;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
WRPMPTD2  RESET     KEY30                                                       
          WRITE     PMSPTDA2,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
DEPMPTD2  RESET     KEY30                                                       
          DELETE    PMSPTDA2,KEY30                                              
          RETURN
.
RSPMPTD3  RESET     KEY38                                                       
          READ      PMSPTDA3,KEY38;;                                            
          RETURN
.
RAPMPTD3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA3,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTD3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA3,KEY38;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTDA3;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTDA3;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTD3                                                                        
          UPDATE    PMSPTDA3;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
WRPMPTD3  RESET     KEY38                                                       
          WRITE     PMSPTDA3,KEY38;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
DEPMPTD3  RESET     KEY38                                                       
          DELETE    PMSPTDA3,KEY38                                              
          RETURN
.
RSPMPTD4  RESET     KEY30                                                       
          READ      PMSPTDA4,KEY30;;                                            
          RETURN
.
RAPMPTD4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA4,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTD4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA4,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTD4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTDA4;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTD4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTDA4;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTD4                                                                        
          UPDATE    PMSPTDA4;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
WRPMPTD4  RESET     KEY30                                                       
          WRITE     PMSPTDA4,KEY30;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
DEPMPTD4  RESET     KEY30                                                       
          DELETE    PMSPTDA4,KEY30                                              
          RETURN
.
RSPMPTD5  RESET     KEY55                                                       
          READ      PMSPTDA5,KEY55;;                                            
          RETURN
.
RAPMPTD5  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA5,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTD5  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTDA5,KEY55;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTD5                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTDA5;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTD5                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTDA5;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTD5                                                                        
          UPDATE    PMSPTDA5;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:      
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
WRPMPTD5  RESET     KEY55                                                       
          WRITE     PMSPTDA5,KEY55;PMPETRDT,PMPETRTM,PMPEVISN,PMPETRAN,PMPEITEM:
                        PMPEURNO,PMPETRTY,PMPEIDES,PMPESERV,PMPETDAT,PMPEAMTT:  
                        PMPEAMTP,PMPERBAT,PMPEGSTC,PMPEGSTM,PMPEWUSR,PMPEEXFN:  
                        PMPEDTEX,PMPETMEX,PMPEDTRN,PMPESPAR                     
          RETURN
.
DEPMPTD5  RESET     KEY55                                                       
          DELETE    PMSPTDA5,KEY55                                              
          RETURN
.
