create table prihtraf
(
  dprhtunq    char(8) default ' ' not null,
  prhtprac    char(6) default ' ' not null,
  prhtdoct    char(10) default ' ' not null,
  prhtpind    char(3) default ' ' not null,
  prhtrefd    char(10) default ' ' not null,
  dprhtflg    char(2) default ' ' not null,
  prhtitmn    char(9) default ' ' not null,
  prhtsubn    char(3) default ' ' not null,
  dprhtnum    char(3) default ' ' not null,
  prhtdate    char(8) default ' ' not null,
  prhttime    char(5) default ' ' not null,
  prhtsern    decimal(3,0) default 0 not null,
  prhtides    char(30) default ' ' not null,
  prhtiamt    decimal(14,2) default 0 not null,
  prhtpflg    decimal(1,0) default 0 not null,
  prhts4b3    decimal(1,0) default 0 not null,
  prhtmeda    char(10) default ' ' not null,
  prhtrdat    char(8) default ' ' not null,
  prhtreft    char(50) default ' ' not null,
  prhtgsta    decimal(1,0) default 0 not null,
  prhtgstc    char(6) default ' ' not null,
  prhtrfpd    char(3) default ' ' not null,
  prhtrefn    char(8) default ' ' not null,
  prhtencn    char(8) default ' ' not null,
  prhthici    char(18) default ' ' not null,
  prhtacoi    char(1) default ' ' not null,
  prhttdur    char(3) default ' ' not null,
  prhtmpov    char(1) default ' ' not null,
  prhtdsov    char(1) default ' ' not null,
  prhtstxt    char(100) default ' ' not null,
  prhtaspf    char(1) default ' ' not null,
  prhtaspc    char(10) default ' ' not null,
  prhtaicf    char(1) default ' ' not null,
  prhtaicv    char(3) default ' ' not null,
  prhtnmpt    char(2) default ' ' not null,
  prhtlspn    char(6) default ' ' not null,
  prhtsdcd    char(2) default ' ' not null,
  prhtlvis    char(8) default ' ' not null,
  prhtrovr    char(3) default ' ' not null,
  prhthosi    char(1) default ' ' not null,
  prhtrovc    char(3) default ' ' not null,
  prhtspar    char(35) default ' ' not null,
  lf          char(1)
);
create index prihtra1 on prihtraf
(
dprhtunq,
prhtprac,
prhtdoct,
prhtpind,
prhtrefd,
prhtrdat,
dprhtflg,
prhtitmn
);
create  index prihtra2 on prihtraf
(
dprhtflg,
prhtitmn,
prhtsubn,
prhtdate
);
create index prihtra3 on prihtraf
(
dprhtunq,
prhtprac,
prhtdoct,
prhtpind,
prhtrefd,
prhtrdat,
dprhtnum,
dprhtflg
);
create index prihtra4 on prihtraf
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
);
revoke all on prihtraf from public ;
grant select on prihtraf to public ;
