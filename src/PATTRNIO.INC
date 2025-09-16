.
. PATIOTRN.INC
. ------------
. Related FD      : PATTRNFD.INC
. Filenames       : pattranf
. Description     : Patient Management System 'Bed Transfer File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY30   DIM    30       KEY FOR PATTRAN1
.                                           KEY FOR PATTRAN2
.                                           KEY FOR PATTRAN4
.                   KEY30   DIM    36       KEY FOR PATTRAN3
. -------------------------------
. ------- FIRST KEY I/O'S -------
. -------------------------------
.
RDSTRAN1  RESET     KEY30
          READ      PATTRAN1,KEY30;;
          RETURN            
.
RDTRAN1   MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATTRAN1,KEY30;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDKTRAN1  MOVE      ZERO,OVRCD
          READKS    PATTRAN1;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDPTRAN1  MOVE      ZERO,OVRCD
          READKP    PATTRAN1;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
WRTRAN1   MOVE      PTTROPER,PTTRCUID
.
          MOVE      ZERO,OVRCD
          RESET     KEY30
          MOVE      TADMN,DTADMN
          MOVE      PTTREPNO,DPTTREPN
          WRITE     PATTRAN1,KEY30;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          RETURN  
.
UPTRAN1   MOVE      TADMN,DTADMN
          MOVE      PTTREPNO,DPTTREPN
          UPDATE    PATTRAN1;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          RETURN
.
DETRAN1   RESET     KEY30
          DELETE    PATTRAN1,KEY30
          RETURN
.
. --------------------------------
. ------- SECOND KEY I/O'S -------
. --------------------------------
.
RDSTRAN2  RESET     KEY30
          READ      PATTRAN2,KEY30;;
          RETURN            
.
RDATRAN2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATTRAN2,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN            
.
RDKTRAN2  MOVE      ZERO,OVRCD
          READKS    PATTRAN2;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDPTRAN2  MOVE      ZERO,OVRCD
          READKP    PATTRAN2;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDTRAN2   MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATTRAN2,KEY30;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
WRTRAN2   MOVE      PTTROPER,PTTRCUID
.
          RESET     KEY30
          MOVE      TADMN,DTADMN
          MOVE      PTTREPNO,DPTTREPN
          WRITE     PATTRAN2,KEY30;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          RETURN  
.
UPTRAN2   MOVE      TADMN,DTADMN
          MOVE      PTTREPNO,DPTTREPN
          UPDATE    PATTRAN2;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          RETURN
.
DETRAN2   RESET     KEY30
          DELETE    PATTRAN2,KEY30
          RETURN
.
. --------------------------------
. ------- THIRD KEY I/O'S --------
. --------------------------------
.
RDSTRAN3  RESET     KEY36
          READ      PATTRAN3,KEY36;;
          RETURN            
.
RDATRAN3  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      PATTRAN3,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN            
.
RDKTRAN3  MOVE      ZERO,OVRCD
          READKS    PATTRAN3;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDPTRAN3  MOVE      ZERO,OVRCD
          READKP    PATTRAN3;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDTRAN3   MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      PATTRAN3,KEY36;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
. --------------------------------
. ------- FOURTH KEY I/O'S -------
. --------------------------------
.
RDSTRAN4  RESET     KEY30
          READ      PATTRAN4,KEY30;;
          RETURN            
.
RDATRAN4  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATTRAN4,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN            
.
RDKTRAN4  MOVE      ZERO,OVRCD
          READKS    PATTRAN4;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDPTRAN4  MOVE      ZERO,OVRCD
          READKP    PATTRAN4;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDTRAN4   MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATTRAN4,KEY30;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
. --------------------------------
. ------- FIFTH KEY I/O'S --------
. --------------------------------
.
RSPTTRN5  RESET     KEY31
          READ      PATTRAN5,KEY31;;
          RETURN            
.
RAPTTRN5  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATTRAN5,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN            
.
RKPTTRN5  MOVE      ZERO,OVRCD
          READKS    PATTRAN5;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RPPTTRN5  MOVE      ZERO,OVRCD
          READKP    PATTRAN5;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
.
RDPTTRN5  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATTRAN5,KEY31;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN  
+
. --------------------------------
. ------- SIXTH KEY I/O'S -------
. --------------------------------
.
RSPTTRN6  RESET     KEY46
          READ      PATTRAN6,KEY46;;
          RETURN
.
RAPTTRN6  MOVE      ZERO,OVRCD
          RESET     KEY46
          READ      PATTRAN6,KEY46;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTTRN6  MOVE      ZERO,OVRCD
          READKS    PATTRAN6;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN
.
RPPTTRN6  MOVE      ZERO,OVRCD
          READKP    PATTRAN6;TWARD,TBED,TDATE,TTIME:
                             TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                             TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                             TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                             TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                             DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                             PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                             PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                             PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                             PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                             PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN
.
RDPTTRN6  MOVE      ZERO,OVRCD
          RESET     KEY46
          READ      PATTRAN6,KEY46;TWARD,TBED,TDATE,TTIME:
                                   TMOVE,TURNO,DTADMN,TRATEF,TRATEG:
                                   TDISC,TALLW,TATYPE,TADOCT,TRATEH:
                                   TEXTRA,PTTRITFS,TFORM12A,TRCDATE,TRCTIME:
                                   TRBTYP,TRBEND,TCHSTAT,TDEPT,PTTRLTYP:
                                   DPTTREPN,PTTREPSD,PTTRLSPT,PTTRLSRB:
                                   PTTRAEND,PTTRADPT,PTTRADRB,PTTRNHAC:
                                   PTTROPER,PTTRAUAT,PTTRCDAT,PTTRCTIM,PTTRCUID:
                                   PTTRLTSC,PTTRUCID,PTTRUUID,PTTRCLTY,PTTRTRTY:
                                   PTTRTEAM,PTTRRSTR,PTTRRESI,PTTRCASE,PTTRFSRC:
                                   PTTRHFND,PTTRFTBL,PTTRHFMN,PTTRHFCN,PTTRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DTADMN,TADMN
          MOVE      DPTTREPN,PTTREPNO
          MOVE      TWARD,SSTWARD
          MOVE      TBED,SSTBED
          MOVE      TDATE,SSTDATE
          MOVE      TTIME,SSTTIME
          MOVE      TADMN,SSTADMN
          RETURN
+

