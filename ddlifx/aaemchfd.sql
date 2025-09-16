create table aaeaudmc
(
  aemcaudd    char(8) default ' ' not null,
  aemcaudt    char(8) default ' ' not null,
  aemcaudp    char(2) default ' ' not null,
  aemcaudr    char(1) default ' ' not null,
  aemcauds    decimal(1,0) default 0 not null,
  aemcaudo    char(4) default ' ' not null,
  aemcclm     char(3) default ' ' not null,
  aemcfund    char(6) default ' ' not null,
  aemctab     char(8) default ' ' not null,
  aemcclss    char(3) default ' ' not null,
  aemcmbs     char(9) default ' ' not null,
  aemcpatp    decimal(14,2) default 0 not null,
  aemcrebp    decimal(14,2) default 0 not null,
  aemcgsta    decimal(1,0) default 0 not null,
  aemcgstc    char(6) default ' ' not null,
  aemcspar    char(22) default ' ' not null,
  lf          char(1)
);
create index aaeaudmc on aaeaudmc
(
aemcaudd,
aemcaudt,
aemcaudp,
aemcaudr
);
revoke all on aaeaudmc from public ; 
grant select on aaeaudmc to public ; 
create table aaemchgf
(
  aemcclm     char(3) default ' ' not null,
  aemcfund    char(6) default ' ' not null,
  aemctab     char(8) default ' ' not null,
  aemcclss    char(3) default ' ' not null,
  aemcmbs     char(9) default ' ' not null,
  aemcpatp    decimal(14,2) default 0 not null,
  aemcrebp    decimal(14,2) default 0 not null,
  aemcgsta    decimal(1,0) default 0 not null,
  aemcgstc    char(6) default ' ' not null,
  aemcspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index aaemchg1 on aaemchgf
(
aemcclm,
aemcfund,
aemctab,
aemcclss,
aemcmbs
);
revoke all on aaemchgf from public ; 
grant select on aaemchgf to public ; 
