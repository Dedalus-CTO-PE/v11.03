create table prihtraf
(
  dprhtunq    varchar2(8) default ' ' not null,
  prhtprac    varchar2(6) default ' ' not null,
  prhtdoct    varchar2(10) default ' ' not null,
  prhtpind    varchar2(3) default ' ' not null,
  prhtrefd    varchar2(10) default ' ' not null,
  dprhtflg    varchar2(2) default ' ' not null,
  prhtitmn    varchar2(9) default ' ' not null,
  prhtsubn    varchar2(3) default ' ' not null,
  dprhtnum    varchar2(3) default ' ' not null,
  prhtdate    varchar2(8) default ' ' not null,
  prhttime    varchar2(5) default ' ' not null,
  prhtsern    number(3,0) default 0 not null,
  prhtides    varchar2(30) default ' ' not null,
  prhtiamt    number(14,2) default 0 not null,
  prhtpflg    number(1,0) default 0 not null,
  prhts4b3    number(1,0) default 0 not null,
  prhtmeda    varchar2(10) default ' ' not null,
  prhtrdat    varchar2(8) default ' ' not null,
  prhtreft    varchar2(50) default ' ' not null,
  prhtgsta    number(1,0) default 0 not null,
  prhtgstc    varchar2(6) default ' ' not null,
  prhtrfpd    varchar2(3) default ' ' not null,
  prhtrefn    varchar2(8) default ' ' not null,
  prhtencn    varchar2(8) default ' ' not null,
  prhthici    varchar2(18) default ' ' not null,
  prhtacoi    varchar2(1) default ' ' not null,
  prhttdur    varchar2(3) default ' ' not null,
  prhtmpov    varchar2(1) default ' ' not null,
  prhtdsov    varchar2(1) default ' ' not null,
  prhtstxt    varchar2(100) default ' ' not null,
  prhtaspf    varchar2(1) default ' ' not null,
  prhtaspc    varchar2(10) default ' ' not null,
  prhtaicf    varchar2(1) default ' ' not null,
  prhtaicv    varchar2(3) default ' ' not null,
  prhtnmpt    varchar2(2) default ' ' not null,
  prhtlspn    varchar2(6) default ' ' not null,
  prhtsdcd    varchar2(2) default ' ' not null,
  prhtlvis    varchar2(8) default ' ' not null,
  prhtrovr    varchar2(3) default ' ' not null,
  prhthosi    varchar2(1) default ' ' not null,
  prhtrovc    varchar2(3) default ' ' not null,
  prhtspar    varchar2(35) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prihtra1 primary key(
dprhtunq,
prhtprac,
prhtdoct,
prhtpind,
prhtrefd,
prhtrdat,
dprhtflg,
prhtitmn,
prhtsubn,
dprhtnum)
)
tablespace pas_data
enable primary key using index
  tablespace pas_indx;
create  index prihtra2 on prihtraf
(
dprhtflg,
prhtitmn,
prhtsubn,
prhtdate
)
  tablespace pas_indx;
create unique index prihtra3 on prihtraf
(
dprhtunq,
prhtprac,
prhtdoct,
prhtpind,
prhtrefd,
prhtrdat,
dprhtnum,
dprhtflg,
prhtitmn,
prhtsubn
)
  tablespace pas_indx;
create unique index prihtra4 on prihtraf
(
dprhtunq,
prhtprac,
prhtdoct,
prhtpind,
prhtrefd,
prhtrdat,
dprhtflg,
prhtitmn,
prhtsubn,
prhtdate,
dprhtnum
)
  tablespace pas_indx;
