.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIODTR                              *
. *                                                        *
. *  Function     :  I/O for patdtraf file                 *
. *                                                        *
. *  Keys         :  KEY22  KEY23 KEY18 KEY23 KEY26 KEY38  *
. *                                                        *
. **********************************************************
.
RDADTRN1 MOVE      ZERO,OVRCD
         RESET     KEY22
         READ      PATDTRA1,KEY22;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSDTRN1 RESET     KEY22
         READ      PATDTRA1,KEY22;;
         RETURN  
.
RDDTRN1  MOVE      ZERO,OVRCD
         RESET     KEY22
         READ      PATDTRA1,KEY22;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
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
                                  PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                  PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                  PTDTPCOD,TSPARE
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
RDKDTRN1 MOVE      ZERO,OVRCD
         READKS    PATDTRA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN1 MOVE      ZERO,OVRCD
         READKP    PATDTRA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
UPDTRN1
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
         UPDATE    PATDTRA1;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
.
         RETURN
.
WRDTRN1
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
         WRITE     PATDTRA1,KEY22;DTADMNO,DTTRANSN1:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
         RETURN  
.
DEDTRN1  RESET     KEY22
         DELETE    PATDTRA1,KEY22
         RETURN
.
.
RDKDTRN2 MOVE      ZERO,OVRCD
         READKS    PATDTRA2;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN2 MOVE      ZERO,OVRCD
         READKP    PATDTRA2;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN2 RESET     KEY23
         READ      PATDTRA2,KEY23;;
         RETURN  
.
.
RDKDTRN3 MOVE      ZERO,OVRCD
         READKS    PATDTRA3;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN3 MOVE      ZERO,OVRCD
         READKP    PATDTRA3;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN3 RESET     KEY18
         READ      PATDTRA3,KEY18;;
         RETURN
.
DEDTRN3  RESET     KEY18
         DELETE    PATDTRA3,KEY18
         RETURN
.
.
RDKDTRN4 MOVE      ZERO,OVRCD
         READKS    PATDTRA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN4 MOVE      ZERO,OVRCD
         READKP    PATDTRA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN4 RESET     KEY23
         READ      PATDTRA4,KEY23;;
         RETURN
.
DEDTRN4  RESET     KEY23
         DELETE    PATDTRA4,KEY23
         RETURN
.
RDDTRN4  MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      PATDTRA4,KEY23;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
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
                                  PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                  PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                  PTDTPCOD,TSPARE
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
UPDTRN4
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
         UPDATE    PATDTRA4;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
.
         RETURN
.
.
RDKDTRN5 MOVE      ZERO,OVRCD
         READKS    PATDTRA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN5 MOVE      ZERO,OVRCD
         READKP    PATDTRA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN5 RESET     KEY23
         READ      PATDTRA5,KEY23;;
         RETURN
.
DEDTRN5  RESET     KEY23
         DELETE    PATDTRA5,KEY23
         RETURN
.
RDDTRN5  MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      PATDTRA5,KEY23;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
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
                                  PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                  PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                  PTDTPCOD,TSPARE
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
UPDTRN5
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
         UPDATE    PATDTRA5;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
.
         RETURN
.
.
RDKDTRN6 MOVE      ZERO,OVRCD
         READKS    PATDTRA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN6 MOVE      ZERO,OVRCD
         READKP    PATDTRA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN6 RESET     KEY26
         READ      PATDTRA6,KEY26;;
         RETURN
.
DEDTRN6  RESET     KEY26
         DELETE    PATDTRA6,KEY26
         RETURN
.
RDDTRN6  MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      PATDTRA6,KEY26;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
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
                                  PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                  PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                  PTDTPCOD,TSPARE
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
UPDTRN6
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
         UPDATE    PATDTRA6;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
.
         RETURN
.
.
RDKDTRN7 MOVE      ZERO,OVRCD
         READKS    PATDTRA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDPDTRN7 MOVE      ZERO,OVRCD
         READKP    PATDTRA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
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
RDSDTRN7 RESET     KEY38
         READ      PATDTRA7,KEY38;;
         RETURN
.
DEDTRN7  RESET     KEY38
         DELETE    PATDTRA7,KEY38
         RETURN
.
RDDTRN7  MOVE      ZERO,OVRCD
         RESET     KEY38
         READ      PATDTRA7,KEY38;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE:
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
                                  PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                  PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                  PTDTPCOD,TSPARE
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
UPDTRN7
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
         UPDATE    PATDTRA7;DTADMNO,DTTRANSN1,TTYPEDEB,TDCODE,TPATAMTT:
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
                                 PTDTSUNQ,PTDTBTCH,PTDTADPT,PTDTADRB:
                                 PTDTCNID,PTDTLSD1,PTDTLSD2,PTDTTMNO,PTDTPMBS:
                                 PTDTPCOD,TSPARE
.
         RETURN
.
+
