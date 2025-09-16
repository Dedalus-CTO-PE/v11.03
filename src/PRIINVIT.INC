.******************************************************************************
.*                                                                            *
.*                              PRIINVIT                                      *
.*                              --------                                      *
.*                                                                            *
.*    Include to define all the I/O calls for the indexed temp files used by  *
.*    the PRIINVPR include.                                                   *
.*                                                                            *
.*    AUTHOR           : DIG                                                  *
.*                                                                            *
.*    DATE             : 01/07/91                                             *
.*                                                                            *
.*    FILES NEEDED     : PRIINVVR.INC                                         *
.*                       Assumes IBAKEYS.INC is included.                     *
.*                                                                            *
.*    MODIFICATIONS    :                                                      *
.*       V10.13.02 25/09/2018  J.Tan         TSK 0836727                      *
.*                 Added Restrictive Override code                            *
.*       V10.13.01 26/07/2018  J.Tan         TSK 0848506                      *
.*                 Changed PP Doctor from DIM6 to DIM10                       *
.*       V10.11.03 04/09/2017  Peter Vela       TSK 0387619                   *
.*                 Added TMPLVIS                                              *
.*       V10.11.02 03/08/2017  Peter Vela       TSK 0387619                   *
.*                 Added TMPMPOV to TMPSDCD                                   *
.*       V10.11.01 27/07/2017  Peter Vela       TSK 0387619                   *
.*                 Added TMPRPER and TMPROVR                                  *
.*       V10.08.01 07/04/2016  Peter Vela       CAR 0294177                   *
.*                 Added TMPACOI and TMPTDUR                                  *
.*       V10.04.01 21/01/2014  Patrick Adair    CAR 265844                    *
.*                  Increase PRA address and phone field lengths and add      *
.*                  new fields for State and mobile phone                     *
.*        V9.12.01  07/08/2009  Mike Laming   CAR 123419                      *
.*                  Add Index 3 for Temp3 table (includes Date of service)    *
.*        V9.04.01  10/06/2005  J.Tan     CAR 56701                           *
.*                  Mods for HIC item invoice file                            *
.*        V9.03.01  25/03/2004  J.Tan                                         *
.*                  Added new variable for actual test item code              *
.*        V9.02.03  04/03/2004  J.Tan                                         *
.*                  Added Referral and encounter variables                    *
.*        V9.02.02  19/06/2002  J.Tan                                         *
.*                  Fixed IO                                                  *
.*        V9.02.01  04/06/2002  Dean Cramer                                   *
.*                  Change IO for changes to temp variables in PRIINVVR       *
.*        V5.08.B01 21/03/2000 J.Tan                                          *
.*                  Mods for GST                                              *
.*                                                                            *
.*                       V6.00.01 24/07/92 Whirlpool                          *
.*                                changed tmpr2 to use key72                  *
.*                                                                            *
.*                                07/10/92  Steve Armstrong                   *
.*                                Modified for alphamumeric debtor number     *
.*        V6.00.02  16/11/1993  Greg Horvat                SRF 126300         *
.*                                Recompiled for PRIINVPR                     *
.*        V6.00.03  18/11/1993  Greg Horvat                SRF 124924         *
.*                  Added invoice layouts in PRIINVPR.PBL                     *
.*        V6.00.04  10/01/1994  Greg Horvat       SRF 127157                  *
.*                  Recomplied for changes to PRINVPR                         *
.* Release 6.01                                                               *
.*        V6.01.01  11/05/1994  Graeme Williams   SRF 129360                  *
.*                  Added extra variables to the TMPR3 routines (ABBRV&MITEM) *
.*        V6.01.02  04/06/1994  Graeme Williams   SRF 129518                  *
.*                  Added TMPMAXR and TMPMAXD to both temp files              *
.* Release 6.02                                                               *
.*        V6.02.01  16/09/1994  Gabrielle        SRF 132082                   *
.*                  Changed write routine to not include the KEY              *
.* Release 6.03                                                               *
.*        V6.03.B1  25/02/1995  Graeme Williams   R6.03 Enhancements          *
.*                  Added extra fields to the temp file to indicate stepdown  *
.*                  items, exception charges and fixed charges.               *
.*                                                                            *
.******************************************************************************
.
.------ I/O Routines for temp files ------
.
RATMPR2   MOVE      ZERO,OVRCD
          RESET     KEY80
          READ      PRITM2XX,KEY80;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSTMPR2   RESET     KEY80
          READ      PRITM2XX,KEY80;;
          RETURN
.
RDTMPR2   MOVE      ZERO,OVRCD
          RESET     KEY80
          READ      PRITM2XX,KEY80;TMPDIM29:
                                   TMPDIM48,TMPPIND:
                                   TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                                   TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                                   TMPRADD3,TMPRADD3,TMPRPOST,TMPRPTEL,TMPRBTEL:
                                   TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                                   TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                                   TMPPFLAG,TMPS4B3,TMPBULK,TMPBCODE,TMPMASS:
                                   TMPMFLAG,TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB:
                                   TMPFIXD,TMPGSTA,TMPGSTC,TMPREFP,TMPREFN:
                                   TMPENCN,TMPHITM,TMPHSUB,TMPHTRN,TMPHICI:
                                   TMPACOI,TMPTDUR,TMPRPER,TMPROVR,TMPMPOV:
                                   TMPDSOV,TMPSTXT,TMPASPF,TMPASPC,TMPAICF:
                                   TMPAICV,TMPNMPT,TMPLSPN,TMPSDCD,TMPLVIS:
                                   TMPHOSI,TMPROVC
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM29,TMPDEBT,DTMPSCAN,TMPPRAC,TMPCLAIM,TMPSDOCT
          UNPACK    TMPDIM48,TMPRDATE,TMPRDOCT,TMPSDATE,TMPSTIME:
                             DTMPIFLG,TMPITEM,TMPSITEM,DTMPTRAN
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RKTMPR2   MOVE      ZERO,OVRCD
          RESET     KEY80
          READKS    PRITM2XX;TMPDIM29:
                             TMPDIM48,TMPPIND:
                             TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPPFLAG,TMPS4B3,TMPBULK,TMPBCODE,TMPMASS:
                             TMPMFLAG,TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB:
                             TMPFIXD,TMPGSTA,TMPGSTC,TMPREFP,TMPREFN:
                             TMPENCN,TMPHITM,TMPHSUB,TMPHTRN,TMPHICI:
                             TMPACOI,TMPTDUR,TMPRPER,TMPROVR,TMPMPOV:
                             TMPDSOV,TMPSTXT,TMPASPF,TMPASPC,TMPAICF:
                             TMPAICV,TMPNMPT,TMPLSPN,TMPSDCD,TMPLVIS:
                             TMPHOSI,TMPROVC
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM29,TMPDEBT,DTMPSCAN,TMPPRAC,TMPCLAIM,TMPSDOCT
          UNPACK    TMPDIM48,TMPRDATE,TMPRDOCT,TMPSDATE,TMPSTIME:
                             DTMPIFLG,TMPITEM,TMPSITEM,DTMPTRAN
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RPTMPR2   MOVE      ZERO,OVRCD
          RESET     KEY80
          READKP    PRITM2XX;TMPDIM29:
                             TMPDIM48,TMPPIND:
                             TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPPFLAG,TMPS4B3,TMPBULK,TMPBCODE,TMPMASS:
                             TMPMFLAG,TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB:
                             TMPFIXD,TMPGSTA,TMPGSTC,TMPREFP,TMPREFN:
                             TMPENCN,TMPHITM,TMPHSUB,TMPHTRN,TMPHICI:
                             TMPACOI,TMPTDUR,TMPRPER,TMPROVR,TMPMPOV:
                             TMPDSOV,TMPSTXT,TMPASPF,TMPASPC,TMPAICF:
                             TMPAICV,TMPNMPT,TMPLSPN,TMPSDCD,TMPLVIS:
                             TMPHOSI,TMPROVC
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM29,TMPDEBT,DTMPSCAN,TMPPRAC,TMPCLAIM,TMPSDOCT
          UNPACK    TMPDIM48,TMPRDATE,TMPRDOCT,TMPSDATE,TMPSTIME:
                             DTMPIFLG,TMPITEM,TMPSITEM,DTMPTRAN
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
WRTMPR2   MOVE      ZERO,OVRCD
          MOVE      TMPSCAN,DTMPSCAN
          MOVE      TMPIFLAG,DTMPIFLG
          MOVE      TMPTRAN,DTMPTRAN
          PACK      TMPDIM29,TMPDEBT,DTMPSCAN,TMPPRAC,TMPCLAIM,TMPSDOCT
          PACK      TMPDIM48,TMPRDATE,TMPRDOCT,TMPSDATE,TMPSTIME:
                             DTMPIFLG,TMPITEM,TMPSITEM,DTMPTRAN,SP70
          RESET     KEY80
          WRITE     PRITM2XX,KEY80;TMPDIM29:
                             TMPDIM48,TMPPIND:
                             TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPPFLAG,TMPS4B3,TMPBULK,TMPBCODE,TMPMASS:
                             TMPMFLAG,TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB:
                             TMPFIXD,TMPGSTA,TMPGSTC,TMPREFP,TMPREFN:
                             TMPENCN,TMPHITM,TMPHSUB,TMPHTRN,TMPHICI:
                             TMPACOI,TMPTDUR,TMPRPER,TMPROVR,TMPMPOV:
                             TMPDSOV,TMPSTXT,TMPASPF,TMPASPC,TMPAICF:
                             TMPAICV,TMPNMPT,TMPLSPN,TMPSDCD,TMPLVIS:
                             TMPHOSI,TMPROVC
          RETURN
.
UPTMPR2   MOVE      TMPSCAN,DTMPSCAN
          MOVE      TMPIFLAG,DTMPIFLG
          MOVE      TMPTRAN,DTMPTRAN
          PACK      TMPDIM29,TMPDEBT,DTMPSCAN,TMPPRAC,TMPCLAIM,TMPSDOCT
          PACK      TMPDIM48,TMPRDATE,TMPRDOCT,TMPSDATE,TMPSTIME:
                             DTMPIFLG,TMPITEM,TMPSITEM,DTMPTRAN,SP70
          UPDATE    PRITM2XX;TMPDIM29:
                             TMPDIM48,TMPPIND:
                             TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPPFLAG,TMPS4B3,TMPBULK,TMPBCODE,TMPMASS:
                             TMPMFLAG,TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB:
                             TMPFIXD,TMPGSTA,TMPGSTC,TMPREFP,TMPREFN:
                             TMPENCN,TMPHITM,TMPHSUB,TMPHTRN,TMPHICI:
                             TMPACOI,TMPTDUR,TMPRPER,TMPROVR,TMPMPOV:
                             TMPDSOV,TMPSTXT,TMPASPF,TMPASPC,TMPAICF:
                             TMPAICV,TMPNMPT,TMPLSPN,TMPSDCD,TMPLVIS:
                             TMPHOSI,TMPROVC
          RETURN
.
DETMPR2   RESET     KEY80
          DELETE    PRITM2XX,KEY80
          RETURN
.
RATMPR3   MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XX,KEY85;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSTMPR3   MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XX,KEY85;;
          RETURN
.
RDTMPR3   MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XX,KEY85;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                                   TMPSTIME,DTMPIFLG:
                                   DTMPTRAN,TMPPIND,TMPADATE,TMPREFD,TMPOPS:
                                   TMPMESG,TMPSERVS,TMPIDESC,TMPIAMNT,TMPRESP:
                                   TMPRADD1,TMPRADD2,TMPRADD3,TMPRADD4,TMPRPOST:
                                   TMPRPTEL,TMPRBTEL,TMPRMPHN,TMPRREL,TMPUDEF1:
                                   TMPUDEF2,TMPUDEF3,TMPUDEF4,TMPUIDEN,TMPCLNUM:
                                   TMPADMN,TMPITOT,TMPBULK,TMPBCODE,TMPMASS:
                                   TMPMFLAG,TMPABBRV,TMPMITEM,TMPMAXR,TMPMAXD:
                                   TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA,TMPGSTC:
                                   TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                                   TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RKTMPR3   MOVE      ZERO,OVRCD
          RESET     KEY85
          READKS    PRITM3XX;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RPTMPR3   MOVE      ZERO,OVRCD
          RESET     KEY85
          READKP    PRITM3XX;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN

          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
WRTMPR3   MOVE      TMPROCS,DTMPROCS
          MOVE      TMPSCAN,DTMPSCAN
          MOVE      TMPIFLAG,DTMPIFLG
          MOVE      TMPTRAN,DTMPTRAN
          PACK      TMPDIM13,TMPSCODE,TMPSDATE
          PACK      TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      ZERO,OVRCD
          RESET     KEY85
          WRITE     PRITM3XX,KEY85;TMPDIM13,TMPITEM,TMPSITEM:
                             TMPDIM50,TMPSTIME:
                             DTMPIFLG,DTMPTRAN,TMPPIND,TMPADATE,TMPREFD,TMPOPS:
                             TMPMESG,TMPSERVS,TMPIDESC,TMPIAMNT,TMPRESP:
                             TMPRADD1,TMPRADD2,TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL:
                             TMPRBTEL,TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPBULK,TMPBCODE,TMPMASS,TMPMFLAG:
                             TMPABBRV,TMPMITEM,TMPMAXR,TMPMAXD:
                             TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA,TMPGSTC:
                             TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          RETURN
.
UPTMPR3   MOVE      TMPROCS,DTMPROCS
          MOVE      TMPSCAN,DTMPSCAN
          MOVE      TMPIFLAG,DTMPIFLG
          MOVE      TMPTRAN,DTMPTRAN
          PACK      TMPDIM13,TMPSCODE,TMPSDATE
          PACK      TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          UPDATE    PRITM3XX;TMPDIM13,TMPITEM,TMPSITEM:
                             TMPDIM50,TMPSTIME:
                             DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          RETURN
.
DETMPR3   RESET     KEY85
          DELETE    PRITM3XX,KEY85
          RETURN
.
RATMPR32  MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XY,KEY85;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSTMPR32  MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XY,KEY85;;
          RETURN
.
RDTMPR32  MOVE      ZERO,OVRCD
          RESET     KEY85
          READ      PRITM3XY,KEY85;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                                   TMPSTIME,DTMPIFLG:
                                   DTMPTRAN,TMPPIND,TMPADATE,TMPREFD,TMPOPS:
                                   TMPMESG,TMPSERVS,TMPIDESC,TMPIAMNT,TMPRESP:
                                   TMPRADD1,TMPRADD2,TMPRADD3,TMPRPOST:
                                   TMPRPTEL,TMPRBTEL,TMPRMPHN,TMPRREL,TMPUDEF1:
                                   TMPUDEF2:
                                   TMPUDEF3,TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN:
                                   TMPITOT,TMPBULK,TMPBCODE,TMPMASS,TMPMFLAG:
                                   TMPABBRV,TMPMITEM,TMPMAXR,TMPMAXD:
                                   TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA,TMPGSTC:
                                   TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                                   TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RKTMPR32  MOVE      ZERO,OVRCD
          RESET     KEY85
          READKS    PRITM3XY;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
RPTMPR32  MOVE      ZERO,OVRCD
          RESET     KEY85
          READKP    PRITM3XY;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL:
                             TMPUDEF1,TMPUDEF2,TMPUDEF3,TMPUDEF4,TMPUIDEN:
                             TMPCLNUM,TMPADMN,TMPITOT,TMPBULK,TMPBCODE,TMPMASS:
                             TMPMFLAG,TMPABBRV,TMPMITEM,TMPMAXR,TMPMAXD:
                             TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA,TMPGSTC:
                             TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
.
WRTMPR32  MOVE      ZERO,OVRCD
          PACK      TMPDIM13,TMPSCODE,TMPSDATE
          PACK      TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          RESET     KEY85
          WRITE     PRITM3XY,KEY85;TMPDIM13,TMPITEM,TMPSITEM:
                             TMPDIM50,TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS:
                             TMPMESG,TMPSERVS,TMPIDESC,TMPIAMNT,TMPRESP:
                             TMPRADD1,TMPRADD2,TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL:
                             TMPRBTEL,TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT:
                             TMPBULK,TMPBCODE,TMPMASS,TMPMFLAG:
                             TMPABBRV,TMPMITEM,TMPMAXR,TMPMAXD:
                             TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA,TMPGSTC:
                             TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          RETURN
.
UPTMPR32  MOVE      TMPROCS,DTMPROCS
          MOVE      TMPSCAN,DTMPSCAN
          MOVE      TMPIFLAG,DTMPIFLG
          MOVE      TMPTRAN,DTMPTRAN
          PACK      TMPDIM13,TMPSCODE,TMPSDATE
          PACK      TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          UPDATE    PRITM3XY;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          RETURN
.
DETMPR32  RESET     KEY85
          DELETE    PRITM3XY,KEY85
          RETURN
.         
.                                                                     *I-123419
RSTMPR33  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PRITM3YY,KEY30;;
          RETURN    
.         
RKTMPR33  MOVE      ZERO,OVRCD
          RESET     KEY30
          READKS    PRITM3YY;TMPDIM13,TMPITEM,TMPSITEM,TMPDIM50:
                             TMPSTIME,DTMPIFLG,DTMPTRAN:
                             TMPPIND,TMPADATE,TMPREFD,TMPOPS,TMPMESG,TMPSERVS:
                             TMPIDESC,TMPIAMNT,TMPRESP,TMPRADD1,TMPRADD2:
                             TMPRADD3,TMPRADD4,TMPRPOST,TMPRPTEL,TMPRBTEL:
                             TMPRMPHN,TMPRREL,TMPUDEF1,TMPUDEF2,TMPUDEF3:
                             TMPUDEF4,TMPUIDEN,TMPCLNUM,TMPADMN,TMPITOT,TMPBULK:
                             TMPBCODE,TMPMASS,TMPMFLAG,TMPABBRV,TMPMITEM:
                             TMPMAXR,TMPMAXD,TMPSTEP,TMPSTSB,TMPFIXD,TMPGSTA:
                             TMPGSTC,TMPREFP,TMPREFN,TMPENCN,TMPHITM,TMPHSUB:
                             TMPHTRN
          GOTO      OVERCOND IF OVER
          UNPACK    TMPDIM13,TMPSCODE,TMPSDATE
          UNPACK    TMPDIM50,DTMPROCS,TMPDEBT,DTMPSCAN,TMPPRAC:
                             TMPCLAIM,TMPSDOCT,TMPRDATE,TMPRDOCT
          MOVE      DTMPROCS,TMPROCS
          MOVE      DTMPSCAN,TMPSCAN
          MOVE      DTMPIFLG,TMPIFLAG
          MOVE      DTMPTRAN,TMPTRAN
          RETURN
