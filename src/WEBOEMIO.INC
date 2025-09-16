.
. WEBOEMIO    
. --------
. Filename     : weboemaf.dat
.
RSWBOEM1  RESET     KEY11                                                       
          READ      WEBOEMA1,KEY11;;                                            
          RETURN
.
RAWBOEM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA1,KEY11;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA1;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA1;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA1;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM1  RESET     KEY11                                                       
          WRITE     WEBOEMA1,KEY11;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM1  RESET     KEY11                                                       
          DELETE    WEBOEMA1,KEY11                                              
          RETURN
.
RSWBOEM2  RESET     KEY16                                                       
          READ      WEBOEMA2,KEY16;;                                            
          RETURN
.
RAWBOEM2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA2,KEY16;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA2;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA2;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA2;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM2  RESET     KEY16                                                       
          WRITE     WEBOEMA2,KEY16;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM2  RESET     KEY16                                                       
          DELETE    WEBOEMA2,KEY16                                              
          RETURN
.
RSWBOEM3  RESET     KEY35                                                       
          READ      WEBOEMA3,KEY35;;                                            
          RETURN
.
RAWBOEM3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA3,KEY35;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA3;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA3;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA3;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM3  RESET     KEY35                                                       
          WRITE     WEBOEMA3,KEY35;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM3  RESET     KEY35                                                       
          DELETE    WEBOEMA3,KEY35                                              
          RETURN
.
RSWBOEM4  RESET     KEY47                                                       
          READ      WEBOEMA4,KEY47;;                                            
          RETURN
.
RAWBOEM4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA4,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA4,KEY47;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA4;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA4;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA4;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM4  RESET     KEY47                                                       
          WRITE     WEBOEMA4,KEY47;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM4  RESET     KEY47                                                       
          DELETE    WEBOEMA4,KEY47                                              
          RETURN
.
RSWBOEM5  RESET     KEY19                                                       
          READ      WEBOEMA5,KEY19;;                                            
          RETURN
.
RAWBOEM5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA5,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA5,KEY19;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA5;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA5;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA5;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM5  RESET     KEY19                                                       
          WRITE     WEBOEMA5,KEY19;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM5  RESET     KEY19                                                       
          DELETE    WEBOEMA5,KEY19                                              
          RETURN
.
RSWBOEM6  RESET     KEY14                                                       
          READ      WEBOEMA6,KEY14;;                                            
          RETURN
.
RAWBOEM6  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA6,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEM6  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOEMA6,KEY14;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEM6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOEMA6;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEM6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOEMA6;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEM6  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOEMA6;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:      
                             WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:      
                             WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:      
                             WBOEELEG,WBOEMSID,WBOESPAR                         
          RETURN
.
WRWBOEM6  RESET     KEY14                                                       
          WRITE     WEBOEMA6,KEY14;WBOEVISN,WBOECNTR,WBOESTAT,WBOEURNO,WBOEARID:
                                   WBOETRID,WBOERQDT,WBOEETYP,WBOEERRC,WBOEERRD:
                                   WBOECDTE,WBOECTIM,WBOEUDTE,WBOEUTIM,WBOEHOSP:
                                   WBOEELEG,WBOEMSID,WBOESPAR                   
          RETURN
.
DEWBOEM6  RESET     KEY14                                                       
          DELETE    WEBOEMA6,KEY14                                              
          RETURN
.
