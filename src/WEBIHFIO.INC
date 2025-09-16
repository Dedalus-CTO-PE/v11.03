.
. WEBIHFIO    
. --------
. Filename     : webihfaf.dat
.
RSWBIHF1  RESET     KEY45                                                       
          READ      WEBIHFA1,KEY45;;                                            
          RETURN
.
RAWBIHF1  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA1,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHF1  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA1,KEY45;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHFA1;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHFA1;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHFA1;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          RETURN
.
WRWBIHF1  RESET     KEY45                                                       
          WRITE     WEBIHFA1,KEY45;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          RETURN
.
DEWBIHF1  RESET     KEY45                                                       
          DELETE    WEBIHFA1,KEY45                                              
          RETURN
.
RSWBIHF2  RESET     KEY69                                                       
          READ      WEBIHFA2,KEY69;;                                            
          RETURN
.
RAWBIHF2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA2,KEY69;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHF2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA2,KEY69;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHFA2;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHFA2;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHFA2;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          RETURN
.
WRWBIHF2  RESET     KEY69                                                       
          WRITE     WEBIHFA2,KEY69;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          RETURN
.
DEWBIHF2  RESET     KEY69                                                       
          DELETE    WEBIHFA2,KEY69                                              
          RETURN
.
RSWBIHF3  RESET     KEY81                                                       
          READ      WEBIHFA3,KEY81;;                                            
          RETURN
.
RAWBIHF3  RESET     KEY81                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA3,KEY81;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHF3  RESET     KEY81                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHFA3,KEY81;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHF3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHFA3;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHF3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHFA3;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHFA3;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:      
                             WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:      
                             WBINSPAR                                           
          RETURN
.
WRWBIHF3  RESET     KEY81                                                       
          WRITE     WEBIHFA3,KEY81;WBINFBID,WBINARID,WBINFRID,WBINRPTC,WBINCACN:
                                   WBINEXCN,WBINEXCD,WBINEXTX,WBINTRID,WBINMSID:
                                   WBINSPAR                                     
          RETURN
.
DEWBIHF3  RESET     KEY81                                                       
          DELETE    WEBIHFA3,KEY81                                              
          RETURN
.
