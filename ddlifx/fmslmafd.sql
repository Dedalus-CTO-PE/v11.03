create table fmsaudla
(
  fmlaaudd    char(8) default ' ' not null,
  fmlaaudt    char(8) default ' ' not null,
  fmlaaudp    char(2) default ' ' not null,
  fmlaaudr    char(1) default ' ' not null,
  fmlaauds    decimal(1,0) default 0 not null,
  fmlaaudo    char(4) default ' ' not null,
  fmlaledg    char(2) default ' ' not null,
  fmladesc    char(35) default ' ' not null,
  fmlacyrr    char(4) default ' ' not null,
  fmlapers    decimal(1,0) default 0 not null,
  fmlabnk     char(12) default ' ' not null,
  fmlacrd     char(12) default ' ' not null,
  fmladis     char(12) default ' ' not null,
  fmladeb     char(12) default ' ' not null,
  fmlapay     char(12) default ' ' not null,
  fmlaift     char(12) default ' ' not null,
  fmlaagst    char(12) default ' ' not null,
  fmlaper     char(2) default ' ' not null,
  fmlapty     char(1) default ' ' not null,
  fmlaabp     char(1) default ' ' not null,
  fmlabnk2    char(12) default ' ' not null,
  fmlapayg    char(12) default ' ' not null,
  fmlaspar    char(14) default ' ' not null,
  lf          char(1)
);
create index fmsaudla on fmsaudla
(
fmlaaudd,
fmlaaudt,
fmlaaudp,
fmlaaudr
);
revoke all on fmsaudla from public ; 
grant select on fmsaudla to public ; 
create table fmslmaaf
(
  fmlaledg    char(2) default ' ' not null,
  fmladesc    char(35) default ' ' not null,
  fmlacyrr    char(4) default ' ' not null,
  fmlapers    decimal(1,0) default 0 not null,
  fmlabnk     char(12) default ' ' not null,
  fmlacrd     char(12) default ' ' not null,
  fmladis     char(12) default ' ' not null,
  fmladeb     char(12) default ' ' not null,
  fmlapay     char(12) default ' ' not null,
  fmlaift     char(12) default ' ' not null,
  fmlaagst    char(12) default ' ' not null,
  fmlaper     char(2) default ' ' not null,
  fmlapty     char(1) default ' ' not null,
  fmlaabp     char(1) default ' ' not null,
  fmlabnk2    char(12) default ' ' not null,
  fmlapayg    char(12) default ' ' not null,
  fmlaspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index fmslmaa1 on fmslmaaf
(
fmlaledg
);
revoke all on fmslmaaf from public ; 
grant select on fmslmaaf to public ; 
