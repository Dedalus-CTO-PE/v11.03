.
. WEBOMHIO    
. --------
. Filename     : webomhaf.dat
.
RSWBOMH1  RESET     KEY25                                                       
          READ      WEBOMHA1,KEY25;;                                            
          RETURN
.
RAWBOMH1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMH1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA1,KEY25;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMHA1;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMHA1;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMHA1;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          RETURN
.
WRWBOMH1  RESET     KEY25                                                       
          WRITE     WEBOMHA1,KEY25;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          RETURN
.
DEWBOMH1  RESET     KEY25                                                       
          DELETE    WEBOMHA1,KEY25                                              
          RETURN
.
RSWBOMH2  RESET     KEY49                                                       
          READ      WEBOMHA2,KEY49;;                                            
          RETURN
.
RAWBOMH2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMH2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA2,KEY49;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMHA2;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMHA2;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMHA2;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          RETURN
.
WRWBOMH2  RESET     KEY49                                                       
          WRITE     WEBOMHA2,KEY49;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          RETURN
.
DEWBOMH2  RESET     KEY49                                                       
          DELETE    WEBOMHA2,KEY49                                              
          RETURN
.
RSWBOMH3  RESET     KEY61                                                       
          READ      WEBOMHA3,KEY61;;                                            
          RETURN
.
RAWBOMH3  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA3,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMH3  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMHA3,KEY61;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMHA3;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMHA3;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMHA3;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:      
                             WBOHMSID,WBOHSPAR                                  
          RETURN
.
WRWBOMH3  RESET     KEY61                                                       
          WRITE     WEBOMHA3,KEY61;WBOHARID,WBOHRPTC,WBOHMECT,WBOHMEID,WBOHCTID:
                                   WBOHMSID,WBOHSPAR                            
          RETURN
.
DEWBOMH3  RESET     KEY61                                                       
          DELETE    WEBOMHA3,KEY61                                              
          RETURN
.
