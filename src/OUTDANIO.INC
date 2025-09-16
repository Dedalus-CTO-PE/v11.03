.
. OUTDANIO    
. --------
. Filename     : outdanaf.dat
.
RSOTDAN1  RESET     KEY34                                                       
          READ      OUTDANA1,KEY34;;                                            
          RETURN
.
RAOTDAN1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDAN1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA1,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDAN1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTDANA1;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDAN1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTDANA1;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDAN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTDANA1;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTDAN1  RESET     KEY34                                                       
          WRITE     OUTDANA1,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          RETURN
.
DEOTDAN1  RESET     KEY34                                                       
          DELETE    OUTDANA1,KEY34                                              
          RETURN
.
RLOTDAN1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     OUTDANA1,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTDAN1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTDANA1;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTDAN1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTDANA1;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTDAN1  RESET     KEY34                                                       
          UNLOCK    OUTDANA1                                                    
          RETURN
.
RSOTDAN2  RESET     KEY34                                                       
          READ      OUTDANA2,KEY34;;                                            
          RETURN
.
RAOTDAN2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA2,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDAN2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA2,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDAN2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTDANA2;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDAN2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTDANA2;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDAN2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTDANA2;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTDAN2  RESET     KEY34                                                       
          WRITE     OUTDANA2,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          RETURN
.
DEOTDAN2  RESET     KEY34                                                       
          DELETE    OUTDANA2,KEY34                                              
          RETURN
.
RLOTDAN2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     OUTDANA2,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTDAN2  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTDANA2;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTDAN2  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTDANA2;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTDAN2  RESET     KEY34                                                       
          UNLOCK    OUTDANA2                                                    
          RETURN
.
RSOTDAN3  RESET     KEY34                                                       
          READ      OUTDANA3,KEY34;;                                            
          RETURN
.
RAOTDAN3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDAN3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA3,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDAN3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTDANA3;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDAN3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTDANA3;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDAN3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTDANA3;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTDAN3  RESET     KEY34                                                       
          WRITE     OUTDANA3,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          RETURN
.
DEOTDAN3  RESET     KEY34                                                       
          DELETE    OUTDANA3,KEY34                                              
          RETURN
.
RLOTDAN3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     OUTDANA3,KEY34;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTDAN3  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTDANA3;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTDAN3  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTDANA3;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTDAN3  RESET     KEY34                                                       
          UNLOCK    OUTDANA3                                                    
          RETURN
.
RSOTDAN4  RESET     KEY42                                                       
          READ      OUTDANA4,KEY42;;                                            
          RETURN
.
RAOTDAN4  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA4,KEY42;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDAN4  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDANA4,KEY42;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDAN4  MOVE      ZERO,OVRCD                                                  
          READKS    OUTDANA4;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDAN4  MOVE      ZERO,OVRCD                                                  
          READKP    OUTDANA4;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDAN4  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTDANA4;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTDAN4  RESET     KEY42                                                       
          WRITE     OUTDANA4,KEY42;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          RETURN
.
DEOTDAN4  RESET     KEY42                                                       
          DELETE    OUTDANA4,KEY42                                              
          RETURN
.
RLOTDAN4  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READL     OUTDANA4,KEY42;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:
                                   OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:
                                   OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:
                                   OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:
                                   OTDNSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTDAN4  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTDANA4;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTDAN4  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTDANA4;OTDNURNO,OTDNADAT,OTDNATIM,OTDNATYP,OTDNVISN:      
                             OTDNCOMP,OTDNOUTC,OTDNCOMM,OTDNCOMD,OTDNCOMT:      
                             OTDNCOMU,OTDNCDAT,OTDNCTIM,OTDNCUID,OTDNUDAT:      
                             OTDNUTIM,OTDNUUID,OTDNREFN,OTDNVDAT,OTDNREQC:      
                             OTDNSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTDAN4  RESET     KEY42                                                       
          UNLOCK    OUTDANA4                                                    
          RETURN
.
