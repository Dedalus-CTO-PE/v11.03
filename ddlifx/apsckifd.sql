create table apsckiaf
(
  apckcrd     char(5) default ' ' not null,
  apckkwd     char(15) default ' ' not null,
  apckspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index apsckia1 on apsckiaf
(
apckcrd,
apckkwd
);
create unique index apsckia2 on apsckiaf
(
apckkwd,
apckcrd
);
revoke all on apsckiaf from public ; 
grant select on apsckiaf to public ; 
