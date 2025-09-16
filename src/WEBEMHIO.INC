.
. WEBEMHIO    
. --------
. Filename     : webemhaf.dat
.
RSWBEMH1  RESET     KEY23                                                       
          READ      WEBEMHA1,KEY23;;                                            
          RETURN
.
RAWBEMH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA1,KEY23;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMHA1;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMHA1;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMHA1;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          RETURN
.
WRWBEMH1  RESET     KEY23                                                       
          WRITE     WEBEMHA1,KEY23;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          RETURN
.
DEWBEMH1  RESET     KEY23                                                       
          DELETE    WEBEMHA1,KEY23                                              
          RETURN
.
RSWBEMH2  RESET     KEY47                                                       
          READ      WEBEMHA2,KEY47;;                                            
          RETURN
.
RAWBEMH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA2,KEY47;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMHA2;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMHA2;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMHA2;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          RETURN
.
WRWBEMH2  RESET     KEY47                                                       
          WRITE     WEBEMHA2,KEY47;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          RETURN
.
DEWBEMH2  RESET     KEY47                                                       
          DELETE    WEBEMHA2,KEY47                                              
          RETURN
.
RSWBEMH3  RESET     KEY59                                                       
          READ      WEBEMHA3,KEY59;;                                            
          RETURN
.
RAWBEMH3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA3,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMH3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMHA3,KEY59;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMHA3;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMHA3;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMHA3;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:      
                             WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:      
                             WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:      
                             WBEUUUID,WBEUMSID,WBEUSPAR                         
          RETURN
.
WRWBEMH3  RESET     KEY59                                                       
          WRITE     WEBEMHA3,KEY59;WBEUARID,WBEURPTC,WBEUCTID,WBEUMSCD,WBEUMSTX:
                                   WBEUCPMN,WBEUCPRN,WBEUCPFN,WBEUFLCN,WBEULDAT:
                                   WBEUCDTE,WBEUCTIM,WBEUCUID,WBEUUDTE,WBEUUTIM:
                                   WBEUUUID,WBEUMSID,WBEUSPAR                   
          RETURN
.
DEWBEMH3  RESET     KEY59                                                       
          DELETE    WEBEMHA3,KEY59                                              
          RETURN
.
