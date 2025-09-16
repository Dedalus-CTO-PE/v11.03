create table allhdtaf
(
  alhdstat    char(2) default ' ' not null,
  alhdurno    char(8) default ' ' not null,
  alhddttm    char(14) default ' ' not null,
  alhdvisn    char(8) default ' ' not null,
  alhdcont    char(8) default ' ' not null,
  alhdbnum    char(20) default ' ' not null,
  alhdmesi    char(20) default ' ' not null,
  alhdrtyp    char(1) default ' ' not null,
  alhdactn    char(1) default ' ' not null,
  alhdvflg    char(1) default ' ' not null,
  alhdmtyp    char(7) default ' ' not null,
  alhdsrce    decimal(1,0) default 0 not null,
  alhddept    char(3) default ' ' not null,
  alhdprgm    decimal(2,0) default 0 not null,
  alhdwebu    char(10) default ' ' not null,
  alhdcrst    char(3) default ' ' not null,
  alhdcavl    char(3) default ' ' not null,
  alhdlarr    char(3) default ' ' not null,
  alhduacc    char(3) default ' ' not null,
  alhdmrel    char(3) default ' ' not null,
  alhddthp    char(3) default ' ' not null,
  alhdourn    char(8) default ' ' not null,
  alhdrdat    char(8) default ' ' not null,
  alhdotrr    char(3) default ' ' not null,
  alhdotrc    char(3) default ' ' not null,
  alhdoutc    char(1) default ' ' not null,
  alhdcluc    char(3) default ' ' not null,
  alhdcrdt    char(8) default ' ' not null,
  alhdradt    char(8) default ' ' not null,
  alhdlink    char(8) default ' ' not null,
  alhdsdat    char(8) default ' ' not null,
  alhdedat    char(8) default ' ' not null,
  alhdfcfl    char(1) default ' ' not null,
  alhdcppt    char(3) default ' ' not null,
  alhdiodt    char(8) default ' ' not null,
  alhdacdd    char(8) default ' ' not null,
  alhdcpdd    char(8) default ' ' not null,
  alhdfabd    char(8) default ' ' not null,
  alhdhddt    char(8) default ' ' not null,
  alhdfnad    char(8) default ' ' not null,
  alhdendr    char(3) default ' ' not null,
  alhdmflg    char(1) default ' ' not null,
  alhdctyp    char(6) default ' ' not null,
  alhdeepr    char(3) default ' ' not null,
  alhdcomp    char(3) default ' ' not null,
  alhdpgrp    char(10) default ' ' not null,
  alhdpgr1    char(10) default ' ' not null,
  alhdpgr2    char(10) default ' ' not null,
  alhdpgr3    char(10) default ' ' not null,
  alhdpgr4    char(10) default ' ' not null,
  alhddate    char(8) default ' ' not null,
  alhdtime    char(8) default ' ' not null,
  alhdpurp    char(3) default ' ' not null,
  alhdstyp    char(3) default ' ' not null,
  alhdpres    char(3) default ' ' not null,
  alhddmod    char(3) default ' ' not null,
  alhddset    char(3) default ' ' not null,
  alhdpofc    char(3) default ' ' not null,
  alhdpdpl    char(3) default ' ' not null,
  alhdcmod    char(3) default ' ' not null,
  alhdiflg    char(8) default ' ' not null,
  alhdspcp    char(10) default ' ' not null,
  alhdcset    char(3) default ' ' not null,
  alhdcepr    char(3) default ' ' not null,
  alhdrodt    char(8) default ' ' not null,
  alhdsert    char(9) default ' ' not null,
  alhdplac    char(9) default ' ' not null,
  alhdrcnt    char(3) default ' ' not null,
  alhdpsit    char(6) default ' ' not null,
  alhdudt1    char(8) default ' ' not null,
  alhdclid    char(6) default ' ' not null,
  alhdtrgs    char(3) default ' ' not null,
  alhdtrgd    char(8) default ' ' not null,
  alhdsdep    char(3) default ' ' not null,
  alhdudt2    char(8) default ' ' not null,
  alhdcedt    char(8) default ' ' not null,
  alhdcetm    char(8) default ' ' not null,
  alhdrsta    char(1) default ' ' not null,
  alhddcan    char(8) default ' ' not null,
  alhdrird    char(3) default ' ' not null,
  alhdrirs    char(9) default ' ' not null,
  alhdrits    char(3) default ' ' not null,
  alhdsrdt    char(8) default ' ' not null,
  alhddclo    char(8) default ' ' not null,
  alhdspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index allhdta1 on allhdtaf
(
alhdstat,
alhdurno,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn
);
create unique index allhdta2 on allhdtaf
(
alhdbnum,
alhdstat,
alhdurno,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn
);
create unique index allhdta3 on allhdtaf
(
alhdurno,
alhdstat,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn
);
create unique index allhdta4 on allhdtaf
(
alhdstat,
alhddttm,
alhdurno,
alhdvisn,
alhdcont,
alhdrtyp,
alhdactn
);
create unique index allhdta5 on allhdtaf
(
alhdurno,
alhdstat,
alhdvisn,
alhdcont,
alhdmtyp,
alhddttm,
alhdrtyp,
alhdactn
);
create unique index allhdta6 on allhdtaf
(
alhdurno,
alhdstat,
alhdvisn,
alhdcont,
alhddttm,
alhdmtyp,
alhdrtyp,
alhdactn
);
create unique index allhdta7 on allhdtaf
(
alhdstat,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn,
alhdurno
);
revoke all on allhdtaf from public ; 
grant select on allhdtaf to public ; 
