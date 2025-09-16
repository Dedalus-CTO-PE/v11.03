.
. **********************************************************
. *                                                        *
. *  Include Name :  OUTRSHIO                              *
. *                                                        *
. *  Function     :  I/O for outrshaf file                 *
. *                                                        *
. *  Keys         :  KEY11 KEY36 KEY25                     *
. *                                                        *
. *  Modifications:                                        *
. *  V10.12.01 05/03/2018  Ebon Clements    TSK 0846913    *
. *            Added OPRSBKDT                              *
. **********************************************************
. *       16/07/2014  Ebon Clements    CAR 251384          *
. *                   Added OPRSTCOD                       *
. *       21/07/2011  Steve Armstrong  CAR 246872          *
. *                   Added OPRSCLTY, OPRSVTYP, OPRSCOMP,  *
. *                   OPRSNMDS, OPRSSRVD & OPRSCARE.       *
. *       11/04/1995  Paul Howells   SRF 134941            *
. *                   Added Operator Id.                   *
. *       V5.00.01    11/09/89 Graeme Williams             *
. *                   Include written                      *
. *                                                        *
. **********************************************************
.
RDSRSHA1 RESET     KEY11
         READ      OUTRSHA1,KEY11;;
         RETURN  
.
RDARSHA1 RESET     KEY11
         MOVE      ZERO,OVRCD
         READ      OUTRSHA1,KEY11;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDRSHA1  MOVE      ZERO,OVRCD
         RESET     KEY11
         READ      OUTRSHA1,KEY11;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDKRSHA1 MOVE      ZERO,OVRCD
         READKS    OUTRSHA1;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDPRSHA1 MOVE      ZERO,OVRCD
         READKP    OUTRSHA1;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
UPRSHA1  MOVE      OPRSSLOT,DOPRSSLO
         MOVE      OPRSOUTN,DOPRSOUT
         MOVE      OPRSUNIQ,DOPRSUNI
         MOVE      OPRSNSLO,DOPRSNSL
         UPDATE    OUTRSHA1;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         RETURN  
.
WRRSHA1  RESET     KEY11
         MOVE      OPRSSLOT,DOPRSSLO
         MOVE      OPRSNSLO,DOPRSNSL
         WRITE     OUTRSHA1,KEY11;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,KEY11:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         RETURN  
.
DERSHA1  RESET     KEY11
         DELETE    OUTRSHA1,KEY11
         RETURN
.
RDSRSHA2 RESET     KEY36
         READ      OUTRSHA2,KEY36;;
         RETURN  
.
RDARSHA2 MOVE      ZERO,OVRCD
         RESET     KEY36
         READ      OUTRSHA2,KEY36;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDRSHA2  MOVE      ZERO,OVRCD
         RESET     KEY36
         READ      OUTRSHA2,KEY36;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDKRSHA2 MOVE      ZERO,OVRCD
         READKS    OUTRSHA2;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDPRSHA2 MOVE      ZERO,OVRCD
         READKP    OUTRSHA2;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDSRSHA3 RESET     KEY25
         READ      OUTRSHA3,KEY25;;
         RETURN  
.
RDARSHA3 MOVE      ZERO,OVRCD
         RESET     KEY25
         READ      OUTRSHA3,KEY25;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDRSHA3  MOVE      ZERO,OVRCD
         RESET     KEY25
         READ      OUTRSHA3,KEY25;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDKRSHA3 MOVE      ZERO,OVRCD
         READKS    OUTRSHA3;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
.
RDPRSHA3 MOVE      ZERO,OVRCD
         READKP    OUTRSHA3;OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT:
                            DOPRSSLO,OPRSTIME,DOPRSOUT,DOPRSUNI:
                            OPRSRDTE,OPRSRTIM,OPRSREAS,OPRSNCLI:
                            OPRSNDAT,OPRSNSTR,DOPRSNSL,OPRSNTIM:
                            OPRSOPER,OPRSCLTY,OPRSVTYP,OPRSCOMP:
                            OPRSNMDS,OPRSSRVD,OPRSCARE,OPRSTCOD:
                            OPRSBKDT,OPRSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DOPRSSLO,OPRSSLOT
         MOVE      DOPRSOUT,OPRSOUTN
         MOVE      DOPRSUNI,OPRSUNIQ
         MOVE      DOPRSNSL,OPRSNSLO
         RETURN  
