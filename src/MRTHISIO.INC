.
. MRTHISIO    
. --------
. Filename     : mrthisaf.dat
.
RSMRHIS1  RESET     KEY26                                                       
          READ      MRTHISA1,KEY26;;                                            
          RETURN
.
RAMRHIS1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA1,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA1;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA1;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA1;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS1  RESET     KEY26                                                       
          WRITE     MRTHISA1,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS1  RESET     KEY26                                                       
          DELETE    MRTHISA1,KEY26                                              
          RETURN
.
RLMRHIS1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA1,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS1  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA1;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS1  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA1;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS1  RESET     KEY26                                                       
          UNLOCK    MRTHISA1                                                    
          RETURN
.
RSMRHIS2  RESET     KEY35                                                       
          READ      MRTHISA2,KEY35;;                                            
          RETURN
.
RAMRHIS2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA2,KEY35;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA2;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA2;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA2;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS2  RESET     KEY35                                                       
          WRITE     MRTHISA2,KEY35;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS2  RESET     KEY35                                                       
          DELETE    MRTHISA2,KEY35                                              
          RETURN
.
RLMRHIS2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA2,KEY35;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS2  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA2;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS2  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA2;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS2  RESET     KEY35                                                       
          UNLOCK    MRTHISA2                                                    
          RETURN
.
RSMRHIS3  RESET     KEY26                                                       
          READ      MRTHISA3,KEY26;;                                            
          RETURN
.
RAMRHIS3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA3,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS3  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA3;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS3  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA3;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS3  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA3;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS3  RESET     KEY26                                                       
          WRITE     MRTHISA3,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS3  RESET     KEY26                                                       
          DELETE    MRTHISA3,KEY26                                              
          RETURN
.
RLMRHIS3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA3,KEY26;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS3  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA3;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS3  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA3;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS3  RESET     KEY26                                                       
          UNLOCK    MRTHISA3                                                    
          RETURN
.
RSMRHIS4  RESET     KEY33                                                       
          READ      MRTHISA4,KEY33;;                                            
          RETURN
.
RAMRHIS4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA4,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA4,KEY33;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS4  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA4;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS4  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA4;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS4  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA4;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS4  RESET     KEY33                                                       
          WRITE     MRTHISA4,KEY33;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS4  RESET     KEY33                                                       
          DELETE    MRTHISA4,KEY33                                              
          RETURN
.
RLMRHIS4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA4,KEY33;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS4  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA4;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS4  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA4;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS4  RESET     KEY33                                                       
          UNLOCK    MRTHISA4                                                    
          RETURN
.
RSMRHIS5  RESET     KEY36                                                       
          READ      MRTHISA5,KEY36;;                                            
          RETURN
.
RAMRHIS5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA5,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA5,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS5  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA5;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS5  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA5;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS5  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA5;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS5  RESET     KEY36                                                       
          WRITE     MRTHISA5,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS5  RESET     KEY36                                                       
          DELETE    MRTHISA5,KEY36                                              
          RETURN
.
RLMRHIS5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA5,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS5  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA5;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS5  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA5;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS5  RESET     KEY36                                                       
          UNLOCK    MRTHISA5                                                    
          RETURN
.
RSMRHIS6  RESET     KEY36                                                       
          READ      MRTHISA6,KEY36;;                                            
          RETURN
.
RAMRHIS6  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA6,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRHIS6  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MRTHISA6,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRHIS6  MOVE      ZERO,OVRCD                                                  
          READKS    MRTHISA6;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRHIS6  MOVE      ZERO,OVRCD                                                  
          READKP    MRTHISA6;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRHIS6  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTHISA6;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRHIS6  RESET     KEY36                                                       
          WRITE     MRTHISA6,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          RETURN
.
DEMRHIS6  RESET     KEY36                                                       
          DELETE    MRTHISA6,KEY36                                              
          RETURN
.
RLMRHIS6  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     MRTHISA6,KEY36;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:  
                                   MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:
                                   MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:
                                   MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:
                                   MRHIMOVN,MRHISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRHIS6  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTHISA6;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRHIS6  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTHISA6;MRHIKEY,MRHIDATE,MRHITIME,MRHILOC,MRHIRECV:        
                             MRHIREAS,MRHIOPER,MRHIDDUE,MRHISTAT,MRHILOCK:      
                             MRHIREQB,MRHIUSID,MRHIEXTN,MRHIPAGE,MRHICOMM:      
                             MRHIDHOS,MRHIRCST,MRHIRCUI,MRHIRCDT,MRHIRCTM:      
                             MRHIMOVN,MRHISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRHIS6  RESET     KEY36                                                       
          UNLOCK    MRTHISA6                                                    
          RETURN
.
