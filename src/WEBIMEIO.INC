.
. WEBIMEIO    
. --------
. Filename     : webimeaf.dat
.
RSWBIME1  RESET     KEY34                                                       
          READ      WEBIMEA1,KEY34;;                                            
          RETURN
.
RAWBIME1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIME1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA1,KEY34;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIME1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMEA1;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIME1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMEA1;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIME1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMEA1;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          RETURN
.
WRWBIME1  RESET     KEY34                                                       
          WRITE     WEBIMEA1,KEY34;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          RETURN
.
DEWBIME1  RESET     KEY34                                                       
          DELETE    WEBIMEA1,KEY34                                              
          RETURN
.
RSWBIME2  RESET     KEY58                                                       
          READ      WEBIMEA2,KEY58;;                                            
          RETURN
.
RAWBIME2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA2,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIME2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA2,KEY58;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIME2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMEA2;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIME2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMEA2;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIME2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMEA2;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          RETURN
.
WRWBIME2  RESET     KEY58                                                       
          WRITE     WEBIMEA2,KEY58;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          RETURN
.
DEWBIME2  RESET     KEY58                                                       
          DELETE    WEBIMEA2,KEY58                                              
          RETURN
.
RSWBIME3  RESET     KEY70                                                       
          READ      WEBIMEA3,KEY70;;                                            
          RETURN
.
RAWBIME3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA3,KEY70;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIME3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMEA3,KEY70;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIME3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMEA3;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIME3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMEA3;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIME3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMEA3;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:      
                             WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:      
                             WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:      
                             WBIESPAR                                           
          RETURN
.
WRWBIME3  RESET     KEY70                                                       
          WRITE     WEBIMEA3,KEY70;WBIEFBID,WBIEARID,WBIECLID,WBIERPTC,WBIEMECN:
                                   WBIEMEID,WBIECFCD,WBIECPSC,WBIECPST,WBIECPMN:
                                   WBIECPRN,WBIECPFN,WBIECPGN,WBIETRID,WBIEMSID:
                                   WBIESPAR                                     
          RETURN
.
DEWBIME3  RESET     KEY70                                                       
          DELETE    WEBIMEA3,KEY70                                              
          RETURN
.
