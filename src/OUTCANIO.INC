.
. **********************************************************
. *                                                        *
. *  Include Name :  OUTCANIO                              *
. *                                                        *
. *  Function     :  I/O for outcanaf file                 *
. *                                                        *
. *  Keys         :  KEY8  KEY24 KEY33  KEY22              *
. *                                                        *
. *  Modifications:                                        *
. *  V10.12.01  05/03/2018  Ebon Clements      TSK 0846913 *
. *             Added OPCNBKDT                             *
. **********************************************************
. *                  16/07/2014 Ebon Clements    CAR 251384*
. *                  Added OPCNTCOD                        *
. *                  15/12/2011 Ebon Clements    CAR 246782*
. *                  Added OPCNREFN                        *
. *                  21/07/2011 Steve Armstrong  CAR 246872*
. *                  Added OPCNCTYP, OPCNNMDS, OPCNSRVC    *
. *                  & OPCNCART.                           *
. *                  09/02/1996    Justin Coates           *
. *                  changed the labels to standards       *
. *                  01/02/1996    Justin Coates           *
. *                  Added visit type of booking           *
. *                  28/07/1995    Max White    SRF 441225 *
. *                  Added Transport Allocation            *
. *                  11/04/1995    Paul Howells SRF 134941 *
. *                  Added Operator Id.                    *
. *                  V5.00.01 11/09/89 Graeme Williams     *
. *                  Include written                       *
. *                                                        *
. **********************************************************
.
RSOTCAN1  RESET     KEY8
          READ      OUTCANA1,KEY8;;
          RETURN  
.
RAOTCAN1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      OUTCANA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDOTCAN1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTCANA1,KEY8;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                                  DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                                  OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                                  OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                                  OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                                  OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                                  OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                                  OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RKOTCAN1  MOVE      ZERO,OVRCD
          READKS    OUTCANA1;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RPOTCAN1  MOVE      ZERO,OVRCD
          READKP    OUTCANA1;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
UPOTCAN1  MOVE      OPCNSLOT,DOPCNSLO
          MOVE      OPCNOUTN,DOPCNOUT
          UPDATE    OUTCANA1;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          RETURN  
.
WROTCAN1  MOVE      OPCNSLOT,DOPCNSLO
          RESET     KEY8
          WRITE     OUTCANA1,KEY8;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,KEY8,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          RETURN  
.
DEOTCAN1  RESET     KEY8
          DELETE    OUTCANA1,KEY8
          RETURN
.
. ------- second index -------
.
RSOTCAN2  RESET     KEY24
          READ      OUTCANA2,KEY24;;
          RETURN  
.
RAOTCAN2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      OUTCANA2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDOTCAN2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      OUTCANA2,KEY24;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                                   DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                                   OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                                   OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                                   OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                                   OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                                   OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                                   OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RKOTCAN2  MOVE      ZERO,OVRCD
          READKS    OUTCANA2;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RPOTCAN2  MOVE      ZERO,OVRCD
          READKP    OUTCANA2;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RSOTCAN3  RESET     KEY33
          READ      OUTCANA3,KEY33;;
          RETURN  
.
RAOTCAN3  MOVE      ZERO,OVRCD
          RESET     KEY33
          READ      OUTCANA3,KEY33;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDOTCAN3  MOVE      ZERO,OVRCD
          RESET     KEY33
          READ      OUTCANA3,KEY33;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                                   DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                                   OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                                   OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                                   OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                                   OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                                   OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                                   OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RKOTCAN3  MOVE      ZERO,OVRCD
          READKS    OUTCANA3;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RPOTCAN3  MOVE      ZERO,OVRCD
          READKP    OUTCANA3;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
UPOTCAN3  MOVE      OPCNSLOT,DOPCNSLO
          MOVE      OPCNOUTN,DOPCNOUT
          UPDATE    OUTCANA3;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          RETURN  
.
RSOTCAN4  RESET     KEY22
          READ      OUTCANA4,KEY22;;
          RETURN  
.
RAOTCAN4  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      OUTCANA4,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDOTCAN4  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      OUTCANA4,KEY22;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                                   DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                                   OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                                   OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                                   OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                                   OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                                   OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                                   OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RKOTCAN4  MOVE      ZERO,OVRCD
          READKS    OUTCANA4;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RPOTCAN4  MOVE      ZERO,OVRCD
          READKP    OUTCANA4;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
. ------- fifth index -------
.
RSOTCAN5  RESET     KEY22
          READ      OUTCANA5,KEY22;;
          RETURN  
.
RAOTCAN5  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTCANA5,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDOTCAN5  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      OUTCANA5,KEY22;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                                   DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                                   OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                                   OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                                   OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                                   OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                                   OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                                   OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RKOTCAN5  MOVE      ZERO,OVRCD
          READKS    OUTCANA5;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
RPOTCAN5  MOVE      ZERO,OVRCD
          READKP    OUTCANA5;OPCNSITE,OPCNCLIN,OPCNDATE,OPCNSTRT:
                             DOPCNSLO,OPCNTIME,DOPCNOUT,OPCNURNO:
                             OPCNREAS,OPCNRDTE,OPCNRTIM,OPCNSRCR:
                             OPCNCOMP,OPCNCLAS,OPCNINS,OPCNCAT:
                             OPCNPRTY,OPCNOPER,OPCNTRAN,OPCNVTYP:
                             OPCNRLRR,OPCNCTYP,OPCNNMDS,OPCNSRVC:
                             OPCNCART,OPCNREFN,OPCNTCOD,OPCNBKDT:
                             OPCNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCNSLO,OPCNSLOT
          MOVE      DOPCNOUT,OPCNOUTN
          RETURN  
.
