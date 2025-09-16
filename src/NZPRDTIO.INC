.
. **********************************************************
. *                                                        *
. *  Include Name :  NZPRDTIO                              *
. *                                                        *
. *  Function     :  I/O for nzprdtaf file                 *
. *                                                        *
. *  Keys         :  KEY22  KEY23                          *
. *                                                        *
. **********************************************************
.
RANZRDT1
         RESET     KEY22
         MOVE      ZERO,OVRCD
         READ      NZPRDTA1,KEY22;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSNZRDT1
         RESET     KEY22
         READ      NZPRDTA1,KEY22;;
         RETURN  
RDNZRDT1
         MOVE      ZERO,OVRCD
         RESET     KEY22
         READ      NZPRDTA1,KEY22;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
                                  TPATAMTT,TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                  DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                  TTCENT,TTYEAR,TTMONTH,TTDAY:
                                  TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                  TDDESC,TINVPRT,DTRECTYP:
                                  TNODAYS,TCLAIM,TREBATE:
                                  TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                  TSESSION,TMISGRP,TDEPTYP:
                                  TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                  TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                  PTDTDES2,PTDTEPSD,PTDTCCU:
                                  PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                  PTDTEFFD,PTDTGSTL,PTDTTIME:
                                  PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                  PTDTCNTR,PTDTCPRC,PTDTCONT:
                                  PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN  
.
RKNZRDT1
         MOVE      ZERO,OVRCD
         READKS    NZPRDTA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN  
RPNZRDT1
         MOVE      ZERO,OVRCD
         READKP    NZPRDTA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN  
.
UPNZRDT1
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
WRNZRDT1
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         RESET     KEY22
         WRITE     NZPRDTA1,KEY22;DTADMNO,DTTRANSN1:
                                 TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         RETURN  
.
DENZRDT1 RESET     KEY22
         DELETE    NZPRDTA1,KEY22
.
         RETURN
.
RKNZRDT2
         MOVE      ZERO,OVRCD
         READKS    NZPRDTA2;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN  
.
RPNZRDT2
         MOVE      ZERO,OVRCD
         READKP    NZPRDTA2;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN  
.
RSNZRDT2
         RESET     KEY23
         READ      NZPRDTA2,KEY23;;
         RETURN  
.
RKNZRDT3 MOVE      ZERO,OVRCD
         READKS    NZPRDTA3;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RPNZRDT3 MOVE      ZERO,OVRCD
         READKP    NZPRDTA3;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RSNZRDT3 RESET     KEY18
         READ      NZPRDTA3,KEY18;;
         RETURN
.
DENZRDT3 RESET     KEY18
         DELETE    NZPRDTA3,KEY18
.
         RETURN
.
UPNZRDT3
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA3;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
RKNZRDT4 MOVE      ZERO,OVRCD
         READKS    NZPRDTA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RPNZRDT4 MOVE      ZERO,OVRCD
         READKP    NZPRDTA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RSNZRDT4 RESET     KEY23
         READ      NZPRDTA4,KEY23;;
         RETURN
.
DENZRDT4 RESET     KEY23
         DELETE    NZPRDTA4,KEY23
.
         RETURN
.
RDNZRDT4 MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      NZPRDTA4,KEY23;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
                                  TPATAMTT,TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                  DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                  TTCENT,TTYEAR,TTMONTH,TTDAY:
                                  TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                  TDDESC,TINVPRT,DTRECTYP:
                                  TNODAYS,TCLAIM,TREBATE:
                                  TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                  TSESSION,TMISGRP,TDEPTYP:
                                  TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                  TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                  PTDTDES2,PTDTEPSD,PTDTCCU:
                                  PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                  PTDTEFFD,PTDTGSTL,PTDTTIME:
                                  PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                  PTDTCNTR,PTDTCPRC,PTDTCONT:
                                  PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN
.
UPNZRDT4
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
RKNZRDT5 MOVE      ZERO,OVRCD
         READKS    NZPRDTA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RPNZRDT5 MOVE      ZERO,OVRCD
         READKP    NZPRDTA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RSNZRDT5 RESET     KEY23
         READ      NZPRDTA5,KEY23;;
         RETURN
.
DENZRDT5 RESET     KEY23
         DELETE    NZPRDTA5,KEY23
.
         RETURN
.
RDNZRDT5 MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      NZPRDTA5,KEY23;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
                                  TPATAMTT,TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                  DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                  TTCENT,TTYEAR,TTMONTH,TTDAY:
                                  TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                  TDDESC,TINVPRT,DTRECTYP:
                                  TNODAYS,TCLAIM,TREBATE:
                                  TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                  TSESSION,TMISGRP,TDEPTYP:
                                  TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                  TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                  PTDTDES2,PTDTEPSD,PTDTCCU:
                                  PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                  PTDTEFFD,PTDTGSTL,PTDTTIME:
                                  PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                  PTDTCNTR,PTDTCPRC,PTDTCONT:
                                  PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN
.
UPNZRDT5
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
RKNZRDT6 MOVE      ZERO,OVRCD
         READKS    NZPRDTA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RPNZRDT6 MOVE      ZERO,OVRCD
         READKP    NZPRDTA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RSNZRDT6 RESET     KEY26
         READ      NZPRDTA6,KEY26;;
         RETURN
.
DENZRDT6 RESET     KEY26
         DELETE    NZPRDTA6,KEY26
.
         RETURN
.
RDNZRDT6 MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      NZPRDTA6,KEY26;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
                                  TPATAMTT,TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                  DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                  TTCENT,TTYEAR,TTMONTH,TTDAY:
                                  TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                  TDDESC,TINVPRT,DTRECTYP:
                                  TNODAYS,TCLAIM,TREBATE:
                                  TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                  TSESSION,TMISGRP,TDEPTYP:
                                  TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                  TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                  PTDTDES2,PTDTEPSD,PTDTCCU:
                                  PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                  PTDTEFFD,PTDTGSTL,PTDTTIME:
                                  PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                  PTDTCNTR,PTDTCPRC,PTDTCONT:
                                  PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN
.
UPNZRDT6
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
RKNZRDT7 MOVE      ZERO,OVRCD
         READKS    NZPRDTA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RPNZRDT7 MOVE      ZERO,OVRCD
         READKP    NZPRDTA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         RETURN
.
RSNZRDT7 RESET     KEY38
         READ      NZPRDTA7,KEY38;;
         RETURN
.
DENZRDT7 RESET     KEY38
         DELETE    NZPRDTA7,KEY38
.
         RETURN
.
RDNZRDT7 MOVE      ZERO,OVRCD
         RESET     KEY38
         READ      NZPRDTA7,KEY38;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
                                  TPATAMTT,TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                  DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                  TTCENT,TTYEAR,TTMONTH,TTDAY:
                                  TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                  TDDESC,TINVPRT,DTRECTYP:
                                  TNODAYS,TCLAIM,TREBATE:
                                  TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                  TSESSION,TMISGRP,TDEPTYP:
                                  TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                  TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                  PTDTDES2,PTDTEPSD,PTDTCCU:
                                  PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                  PTDTEFFD,PTDTGSTL,PTDTTIME:
                                  PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                  PTDTCNTR,PTDTCPRC,PTDTCONT:
                                  PTDTSUNQ,PTDTBTCH,TSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DTADMNO,TADMNO
         MOVE      DTTRANSN1,TTRANSN1
         MOVE      DTFCENT,TFCENT
         MOVE      DTFYEAR,TFYEAR
         MOVE      DTFMONTH,TFMONTH
         MOVE      DTFDAY,TFDAY
         MOVE      DTRECTYP,TRECTYPE
         MOVE      TREF,STREF
         RETURN
.
UPNZRDT7
         MOVE      TADMNO,DTADMNO
         MOVE      TTRANSN1,DTTRANSN1
         MOVE      TFCENT,DTFCENT
         MOVE      TFYEAR,DTFYEAR
         MOVE      TFMONTH,DTFMONTH
         MOVE      TFDAY,DTFDAY
         MOVE      TRECTYPE,DTRECTYP
.
         PACK      TCHGDTE WITH CCC,CYY,CMM,CDD
         REP       " 0",TCHGDTE
         CLOCK     TIME,TCHGTIM
.
         UPDATE    NZPRDTA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
                                 TPATAMTG,TPATAMTH,TPATAMTI,TPATAMTP:
                                 DTFCENT,DTFYEAR,DTFMONTH,DTFDAY:
                                 TTCENT,TTYEAR,TTMONTH,TTDAY:
                                 TTYPE,TITEMNO,TREF,TPAYTYPE,TRECEIPT:
                                 TDDESC,TINVPRT,DTRECTYP:
                                 TNODAYS,TCLAIM,TREBATE:
                                 TDOCTA,TSERVS,TDOCTO,TCHGDTE,TCHGTIM:
                                 TSESSION,TMISGRP,TDEPTYP:
                                 TDWARD,TCLMTYP,TADMTYP,TBATCHN:
                                 TNINVS,PTDTLSPT,PTDTLSRB,PTDTDTYP:
                                 PTDTDES2,PTDTEPSD,PTDTCCU:
                                 PTDTGSTA,PTDTGSTC,PTDTGSTM:
                                 PTDTEFFD,PTDTGSTL,PTDTTIME:
                                 PTDTCRST,PTDTUNIQ,PTDTBTYP:
                                 PTDTCNTR,PTDTCPRC,PTDTCONT:
                                 PTDTSUNQ,PTDTBTCH,TSPARE
.
         RETURN
.
+
