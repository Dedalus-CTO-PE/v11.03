.
. BOKRX1IO    
. --------
. Filename     : bokrx1af.dat
.
RSBKRX11  RESET     KEY8                                                        
          READ      BOKRX1A1,KEY8;;                                             
          RETURN
.
RABKRX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      BOKRX1A1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      BOKRX1A1,KEY8;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY: 
                                  BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4: 
                                  BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4: 
                                  BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1: 
                                  BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT: 
                                  BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU: 
                                  BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM: 
                                  BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC: 
                                  BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP: 
                                  BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6: 
                                  BKRXUDF7,BKRXPACA,BKRXSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRX11  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRX1A1;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRX11  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRX1A1;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRX11  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRX1A1;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRBKRX11  RESET     KEY8                                                        
          WRITE     BOKRX1A1,KEY8;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY: 
                                  BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4: 
                                  BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4: 
                                  BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1: 
                                  BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT: 
                                  BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU: 
                                  BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM: 
                                  BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC: 
                                  BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP: 
                                  BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6: 
                                  BKRXUDF7,BKRXPACA,BKRXSPAR                    
          RETURN
.
DEBKRX11  RESET     KEY8                                                        
          DELETE    BOKRX1A1,KEY8                                               
          RETURN
.
RLBKRX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     BOKRX1A1,KEY8;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY: 
                                  BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4: 
                                  BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4: 
                                  BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1: 
                                  BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT: 
                                  BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU: 
                                  BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM: 
                                  BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC: 
                                  BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP: 
                                  BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6: 
                                  BKRXUDF7,BKRXPACA,BKRXSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLBKRX11  MOVE      ZERO,OVRCD                                                  
          READLKS   BOKRX1A1;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLBKRX11  MOVE      ZERO,OVRCD                                                  
          READLKP   BOKRX1A1;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUBKRX11  RESET     KEY8                                                        
          UNLOCK    BOKRX1A1                                                    
          RETURN
.
RSBKRX12  RESET     KEY16                                                       
          READ      BOKRX1A2,KEY16;;                                            
          RETURN
.
RABKRX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRX1A2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRX1A2,KEY16;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:
                                   BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:
                                   BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:
                                   BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:
                                   BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:
                                   BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:
                                   BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:
                                   BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:
                                   BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:
                                   BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:
                                   BKRXUDF7,BKRXPACA,BKRXSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRX12  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRX1A2;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRX12  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRX1A2;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRX12  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRX1A2;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRBKRX12  RESET     KEY16                                                       
          WRITE     BOKRX1A2,KEY16;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:
                                   BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:
                                   BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:
                                   BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:
                                   BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:
                                   BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:
                                   BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:
                                   BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:
                                   BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:
                                   BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:
                                   BKRXUDF7,BKRXPACA,BKRXSPAR                   
          RETURN
.
DEBKRX12  RESET     KEY16                                                       
          DELETE    BOKRX1A2,KEY16                                              
          RETURN
.
RLBKRX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     BOKRX1A2,KEY16;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:
                                   BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:
                                   BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:
                                   BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:
                                   BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:
                                   BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:
                                   BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:
                                   BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:
                                   BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:
                                   BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:
                                   BKRXUDF7,BKRXPACA,BKRXSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLBKRX12  MOVE      ZERO,OVRCD                                                  
          READLKS   BOKRX1A2;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLBKRX12  MOVE      ZERO,OVRCD                                                  
          READLKP   BOKRX1A2;BKRXBNUM,BKRXPOWD,BKRXADWD,BKRXCDTE,BKRXPSTY:      
                             BKRXCNDT,BKRXUDF1,BKRXUDF2,BKRXUDF3,BKRXUDF4:      
                             BKRXUDF5,BKRXUDD1,BKRXUDD2,BKRXUDD3,BKRXUDD4:      
                             BKRXUFF1,BKRXUFF2,BKRXUFF3,BKRXUFF4,BKRXEDC1:      
                             BKRXEDC2,BKRXEDC3,BKRXODTE,BKRXOPRD,BKRXCRDT:      
                             BKRXCRTM,BKRXWEBC,BKRXLUPD,BKRXLUPT,BKRXWEBU:      
                             BKRXASRC,BKRXBLDT,BKRXCTTY,BKRXSGBK,BKRXFORM:      
                             BKRXCNTM,BKRXUDT1,BKRXUDT2,BKRXPOBD,BKRXPOEC:      
                             BKRXDIET,BKRXTRAN,BKRXATRN,BKRXANTY,BKRXESOP:      
                             BKRXEABR,BKRXAUBY,BKRXEAID,BKRXDROR,BKRXUDF6:      
                             BKRXUDF7,BKRXPACA,BKRXSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUBKRX12  RESET     KEY16                                                       
          UNLOCK    BOKRX1A2                                                    
          RETURN
.
