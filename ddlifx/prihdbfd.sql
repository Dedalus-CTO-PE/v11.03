create table prihdbtf
(
  prhddebt    char(8) default ' ' not null,
  dprhdscn    char(2) default ' ' not null,
  prhdclam    char(3) default ' ' not null,
  prhdaccd    char(8) default ' ' not null,
  dprhdunq    char(8) default ' ' not null,
  prhdhfnd    char(6) default ' ' not null,
  prhdspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index prihdbt1 on prihdbtf
(
prhddebt,
dprhdscn,
prhdclam,
prhdaccd,
prhdhfnd
);
create unique index prihdbt2 on prihdbtf
(
dprhdunq
);
revoke all on prihdbtf from public ; 
grant select on prihdbtf to public ; 
