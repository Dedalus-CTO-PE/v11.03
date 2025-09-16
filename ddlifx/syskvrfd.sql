create table syskvraf
(
  sykvsys     char(2) default ' ' not null,
  sykvfil     char(2) default ' ' not null,
  sykvrid     char(1) default ' ' not null,
  sykvkfld    char(4) default ' ' not null,
  sykvkdes    char(20) default ' ' not null,
  sykvktyp    decimal(1,0) default 0 not null,
  sykvidx     char(1) default ' ' not null,
  sykvhid     char(1) default ' ' not null,
  sykvspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index syskvra1 on syskvraf
(
sykvsys,
sykvfil,
sykvrid
);
revoke all on syskvraf from public ; 
grant select on syskvraf to public ; 
