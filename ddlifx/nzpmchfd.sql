create table nzpmchaf
(
  nzmchosp    char(3) default ' ' not null,
  nzmcclmc    char(3) default ' ' not null,
  nzmccntr    char(6) default ' ' not null,
  nzmcftab    char(8) default ' ' not null,
  nzmcmchg    char(9) default ' ' not null,
  nzmcefdt    char(8) default ' ' not null,
  nzmcdesc    char(90) default ' ' not null,
  nzmcchgt    decimal(1,0) default 0 not null,
  nzmccgrp    char(3) default ' ' not null,
  nzmcpatp    decimal(14,2) default 0 not null,
  nzmcrebp    decimal(14,2) default 0 not null,
  nzmcindc    decimal(1,0) default 0 not null,
  nzmcgsta    decimal(1,0) default 0 not null,
  nzmcgstc    char(6) default ' ' not null,
  nzmcedie    char(10) default ' ' not null,
  nzmckpri    char(1) default ' ' not null,
  nzmcshwd    char(1) default ' ' not null,
  nzmccdat    char(8) default ' ' not null,
  nzmcctim    char(8) default ' ' not null,
  nzmccuid    char(10) default ' ' not null,
  nzmcudat    char(8) default ' ' not null,
  nzmcutim    char(8) default ' ' not null,
  nzmcuuid    char(10) default ' ' not null,
  nzmcacfl    char(1) default ' ' not null,
  nzmceedt    char(8) default ' ' not null,
  nzmcspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index nzpmcha1 on nzpmchaf
(
nzmchosp,
nzmcclmc,
nzmccntr,
nzmcftab,
nzmcmchg,
nzmcefdt
);
create unique index nzpmcha2 on nzpmchaf
(
nzmccgrp,
nzmchosp,
nzmcclmc,
nzmccntr,
nzmcftab,
nzmcefdt,
nzmcmchg
);
create unique index nzpmcha3 on nzpmchaf
(
nzmcmchg,
nzmcclmc,
nzmchosp,
nzmccntr,
nzmcftab,
nzmcefdt
);
revoke all on nzpmchaf from public ; 
grant select on nzpmchaf to public ; 
