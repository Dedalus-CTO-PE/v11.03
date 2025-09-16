create table fmscsaaf
(
  fmcsled     char(2) default ' ' not null,
  fmcsacc     char(12) default ' ' not null,
  fmcsbnk     char(12) default ' ' not null,
  fmcscrd     char(12) default ' ' not null,
  fmcsdis     char(12) default ' ' not null,
  fmcsdeb     char(12) default ' ' not null,
  fmcspay     char(12) default ' ' not null,
  fmcscgst    char(12) default ' ' not null,
  fmcsagst    char(12) default ' ' not null,
  fmcsbnk2    char(12) default ' ' not null,
  fmcsspa     char(8) default ' ' not null,
  lf          char(1)
);
create unique index fmscsaa1 on fmscsaaf
(
fmcsled,
fmcsacc
);
revoke all on fmscsaaf from public ; 
grant select on fmscsaaf to public ; 
