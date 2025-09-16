create table allhdtaf
(
  alhdstat    varchar2(2) default ' ' not null,
  alhdurno    varchar2(8) default ' ' not null,
  alhddttm    varchar2(14) default ' ' not null,
  alhdvisn    varchar2(8) default ' ' not null,
  alhdcont    varchar2(8) default ' ' not null,
  alhdbnum    varchar2(20) default ' ' not null,
  alhdmesi    varchar2(20) default ' ' not null,
  alhdrtyp    varchar2(1) default ' ' not null,
  alhdactn    varchar2(1) default ' ' not null,
  alhdvflg    varchar2(1) default ' ' not null,
  alhdmtyp    varchar2(7) default ' ' not null,
  alhdsrce    number(1,0) default 0 not null,
  alhddept    varchar2(3) default ' ' not null,
  alhdprgm    number(2,0) default 0 not null,
  alhdwebu    varchar2(10) default ' ' not null,
  alhdcrst    varchar2(3) default ' ' not null,
  alhdcavl    varchar2(3) default ' ' not null,
  alhdlarr    varchar2(3) default ' ' not null,
  alhduacc    varchar2(3) default ' ' not null,
  alhdmrel    varchar2(3) default ' ' not null,
  alhddthp    varchar2(3) default ' ' not null,
  alhdourn    varchar2(8) default ' ' not null,
  alhdrdat    varchar2(8) default ' ' not null,
  alhdotrr    varchar2(3) default ' ' not null,
  alhdotrc    varchar2(3) default ' ' not null,
  alhdoutc    varchar2(1) default ' ' not null,
  alhdcluc    varchar2(3) default ' ' not null,
  alhdcrdt    varchar2(8) default ' ' not null,
  alhdradt    varchar2(8) default ' ' not null,
  alhdlink    varchar2(8) default ' ' not null,
  alhdsdat    varchar2(8) default ' ' not null,
  alhdedat    varchar2(8) default ' ' not null,
  alhdfcfl    varchar2(1) default ' ' not null,
  alhdcppt    varchar2(3) default ' ' not null,
  alhdiodt    varchar2(8) default ' ' not null,
  alhdacdd    varchar2(8) default ' ' not null,
  alhdcpdd    varchar2(8) default ' ' not null,
  alhdfabd    varchar2(8) default ' ' not null,
  alhdhddt    varchar2(8) default ' ' not null,
  alhdfnad    varchar2(8) default ' ' not null,
  alhdendr    varchar2(3) default ' ' not null,
  alhdmflg    varchar2(1) default ' ' not null,
  alhdctyp    varchar2(6) default ' ' not null,
  alhdeepr    varchar2(3) default ' ' not null,
  alhdcomp    varchar2(3) default ' ' not null,
  alhdpgrp    varchar2(10) default ' ' not null,
  alhdpgr1    varchar2(10) default ' ' not null,
  alhdpgr2    varchar2(10) default ' ' not null,
  alhdpgr3    varchar2(10) default ' ' not null,
  alhdpgr4    varchar2(10) default ' ' not null,
  alhddate    varchar2(8) default ' ' not null,
  alhdtime    varchar2(8) default ' ' not null,
  alhdpurp    varchar2(3) default ' ' not null,
  alhdstyp    varchar2(3) default ' ' not null,
  alhdpres    varchar2(3) default ' ' not null,
  alhddmod    varchar2(3) default ' ' not null,
  alhddset    varchar2(3) default ' ' not null,
  alhdpofc    varchar2(3) default ' ' not null,
  alhdpdpl    varchar2(3) default ' ' not null,
  alhdcmod    varchar2(3) default ' ' not null,
  alhdiflg    varchar2(8) default ' ' not null,
  alhdspcp    varchar2(10) default ' ' not null,
  alhdcset    varchar2(3) default ' ' not null,
  alhdcepr    varchar2(3) default ' ' not null,
  alhdrodt    varchar2(8) default ' ' not null,
  alhdsert    varchar2(9) default ' ' not null,
  alhdplac    varchar2(9) default ' ' not null,
  alhdrcnt    varchar2(3) default ' ' not null,
  alhdpsit    varchar2(6) default ' ' not null,
  alhdudt1    varchar2(8) default ' ' not null,
  alhdclid    varchar2(6) default ' ' not null,
  alhdtrgs    varchar2(3) default ' ' not null,
  alhdtrgd    varchar2(8) default ' ' not null,
  alhdsdep    varchar2(3) default ' ' not null,
  alhdudt2    varchar2(8) default ' ' not null,
  alhdcedt    varchar2(8) default ' ' not null,
  alhdcetm    varchar2(8) default ' ' not null,
  alhdrsta    varchar2(1) default ' ' not null,
  alhddcan    varchar2(8) default ' ' not null,
  alhdrird    varchar2(3) default ' ' not null,
  alhdrirs    varchar2(9) default ' ' not null,
  alhdrits    varchar2(3) default ' ' not null,
  alhdsrdt    varchar2(8) default ' ' not null,
  alhddclo    varchar2(8) default ' ' not null,
  alhdspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allhdta1 primary key( 
alhdstat,
alhdurno,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
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
)
  tablespace pas_indx; 
create unique index allhdta3 on allhdtaf
(
alhdurno,
alhdstat,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn
)
  tablespace pas_indx; 
create unique index allhdta4 on allhdtaf
(
alhdstat,
alhddttm,
alhdurno,
alhdvisn,
alhdcont,
alhdrtyp,
alhdactn
)
  tablespace pas_indx; 
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
)
  tablespace pas_indx; 
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
)
  tablespace pas_indx; 
create unique index allhdta7 on allhdtaf
(
alhdstat,
alhdvisn,
alhdcont,
alhddttm,
alhdrtyp,
alhdactn,
alhdurno
)
  tablespace pas_indx; 
