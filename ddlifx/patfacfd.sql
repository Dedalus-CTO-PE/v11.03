create table patfactf
(
  fadate      char(8) default ' ' not null,
  dfadmno     char(8) default ' ' not null,
  facode      char(3) default ' ' not null,
  facomm      char(60) default ' ' not null,
  ptfcurno    char(8) default ' ' not null,
  ptfcdtcp    char(8) default ' ' not null,
  ptfcocgr    char(3) default ' ' not null,
  ptfchfnd    char(6) default ' ' not null,
  ptfcstat    char(1) default ' ' not null,
  ptfcinvn    char(8) default ' ' not null,
  ptfccdat    char(8) default ' ' not null,
  ptfcctim    char(8) default ' ' not null,
  ptfccuid    char(10) default ' ' not null,
  ptfcudat    char(8) default ' ' not null,
  ptfcutim    char(8) default ' ' not null,
  ptfcuuid    char(10) default ' ' not null,
  ptfcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patfact1 on patfactf
(
dfadmno,
fadate,
facode
);
create unique index patfact2 on patfactf
(
fadate,
dfadmno,
facode
);
create unique index patfact3 on patfactf
(
ptfcurno,
fadate,
dfadmno,
facode
);
revoke all on patfactf from public ; 
grant select on patfactf to public ; 
