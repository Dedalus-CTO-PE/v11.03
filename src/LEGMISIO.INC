.*****************************************************************************
.*        LEGMISIO.INC                                                       *
.* Mods:                                                                     *
.*        V9.10.01  23/05/2008  Mike Laming      CAR 169152                  *
.*                  Added fields and increased length to 589 (same as V6.15) *
.*        18/01/2008  Steve Armstrong  CAR 159429                            *
.*                    Added Index 6 I/O routines for U/R merging             *
.*****************************************************************************
.
RSLGMIS1  RESET     KEY8
          READ      LEGMISS1,KEY8;;
          RETURN
.
RALGMIS1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGMISS1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGMIS1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGMISS1,KEY8;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RKLGMIS1  MOVE      ZERO,OVRCD
          READKS    LEGMISS1;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RPLGMIS1  MOVE      ZERO,OVRCD
          READKP    LEGMISS1;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RSLGMIS2  RESET     KEY9
          READ      LEGMISS2,KEY9;;
          RETURN
.
RALGMIS2  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      LEGMISS2,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGMIS2  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      LEGMISS2,KEY9;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RKLGMIS2  MOVE      ZERO,OVRCD
          READKS    LEGMISS2;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RPLGMIS2  MOVE      ZERO,OVRCD
          READKP    LEGMISS2;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RSLGMIS3  RESET     KEY16
          READ      LEGMISS3,KEY16;;
          RETURN
.
RALGMIS3  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGMISS3,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGMIS3  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGMISS3,KEY16;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RKLGMIS3  MOVE      ZERO,OVRCD
          READKS    LEGMISS3;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RPLGMIS3  MOVE      ZERO,OVRCD
          READKP    LEGMISS3;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RSLGMIS4  RESET     KEY21
          READ      LEGMISS4,KEY21;;
          RETURN
.
RALGMIS4  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      LEGMISS4,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGMIS4  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      LEGMISS4,KEY21;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RKLGMIS4  MOVE      ZERO,OVRCD
          READKS    LEGMISS4;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RPLGMIS4  MOVE      ZERO,OVRCD
          READKP    LEGMISS4;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RSLGMIS5  RESET     KEY20
          READ      LEGMISS5,KEY20;;
          RETURN
.
RALGMIS5  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      LEGMISS5,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGMIS5  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      LEGMISS5,KEY20;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RKLGMIS5  MOVE      ZERO,OVRCD
          READKS    LEGMISS5;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RPLGMIS5  MOVE      ZERO,OVRCD
          READKP    LEGMISS5;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
RSLGMIS6  RESET     KEY16
          READ      LEGMISS6,KEY16;;
          RETURN
.
RKLGMIS6  MOVE      ZERO,OVRCD
          READKS    LEGMISS6;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          GOTO      OVERCOND IF OVER
          MOVE      DLAADMNO,LAADMNO
          MOVE      DLASTAT,LASTAT
          MOVE      LAADMNO,LSSAADMN
          MOVE      LASTAT,LSSASTAT
          MOVE      LADATE,LSSADATE
          MOVE      LDAMUMAD,LAMUMADM
          RETURN
.
UPLGMIS6  MOVE      LAADMNO,DLAADMNO
          MOVE      LASTAT,DLASTAT
          MOVE      LAMUMADM,LDAMUMAD
          UPDATE    LEGMISS6;DLAADMNO,LAURNO,LADATE,LATIME:
                                  DLASTAT,LAPORT,LATRANNO,LAINVPRT,LALACDTE:
                                  LACANCEL,LAWARD,LABED,LADOCTR,LADOCTA:
                                  LADOCTL,LASRCE,LADTYPE,LACLSS,LACARE:
                                  LAFUNDH,LAFNDTB,LAFNDMM,LAELIG,LAVISIT:
                                  LAALERG,LAILLN,LADIAG1,LADIAG2,LADISC:
                                  LADOCTT,LACLSSFT,LAALLOW,LAMBS,LACLAIM:
                                  LADIET,LAPLOCCR,LASTAY,LADYHOSP,LAMEMB:
                                  LAMEMBNO,LACOMM1,LACOMM2,LAPLUR,LABWGHT:
                                  LAPURGE,LAUSR1,LAUSR2,LAUSR3,LAUSR4:
                                  LAUSR5,LAUSR6,LAUSR7,LPTMIU08,LPTMIU09:
                                  LPTMIU10,LPTMIU11,LADSCHI,LARDRNAM,LAFNDYY:
                                  LAFNDCG,LAOCCDTE,LACODDTE,LARETDTE,LDAMUMAD:
                                  LPTMIPDR,LPTMIGST,LPTMIEOC,LPTMISLO,LPTMISCL:
                                  LPTMISTR,LPTMICMX,LPTMIDFA,LPTMIINT,LPTMIPRE:
                                  LPTMIPSF,LPTMIPSR,LPTMIQAS,LPTMIHFS,LPTMIHFG:
                                  LPTMIFUP
          RETURN
