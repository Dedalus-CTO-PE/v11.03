create table apsceaaf
(
  apeaisc     char(1) default ' ' not null,
  apeaord     char(7) default ' ' not null,
  apeacrd     char(5) default ' ' not null,
  apeadat     char(8) default ' ' not null,
  apeaspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index apsceaa1 on apsceaaf
(
apeaisc,
apeaord
);
create unique index apsceaa2 on apsceaaf
(
apeacrd,
apeadat,
apeaisc,
apeaord
);
revoke all on apsceaaf from public ; 
grant select on apsceaaf to public ; 
