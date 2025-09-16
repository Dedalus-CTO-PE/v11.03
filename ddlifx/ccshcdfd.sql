create table ccshcdaf
(
  cchchcd     char(2) default ' ' not null,
  cchcdes     char(35) default ' ' not null,
  cchcpref    char(1) default ' ' not null,
  cchcpuse    char(1) default ' ' not null,
  cchcspa     char(38) default ' ' not null,
  lf          char(1)
);
create unique index ccshcda1 on ccshcdaf
(
cchchcd
);
create unique index ccshcda2 on ccshcdaf
(
cchcdes,
cchchcd
);
revoke all on ccshcdaf from public ; 
grant select on ccshcdaf to public ; 
