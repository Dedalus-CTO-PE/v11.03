create table apscioaf
(
  apciisc     char(1) default ' ' not null,
  apciord     char(7) default ' ' not null,
  apcicrd     char(5) default ' ' not null,
  apcidat     char(8) default ' ' not null,
  apcispa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index apscioa1 on apscioaf
(
apciisc,
apciord
);
create unique index apscioa2 on apscioaf
(
apcicrd,
apcidat,
apciisc,
apciord
);
revoke all on apscioaf from public ; 
grant select on apscioaf to public ; 
