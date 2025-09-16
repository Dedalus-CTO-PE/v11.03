create table ccssdcaf
(
  ccsdhcd     char(2) default ' ' not null,
  ccsddpt     char(8) default ' ' not null,
  ccsdyear    char(4) default ' ' not null,
  ccsdper     char(2) default ' ' not null,
  ccsddir     decimal(14,2) default 0 not null,
  ccsddrb     decimal(14,2) default 0 not null,
  ccsdind     decimal(14,2) default 0 not null,
  ccsdinb     decimal(14,2) default 0 not null,
  ccsdfbu     decimal(14,2) default 0 not null,
  ccsdstd     decimal(14,2) default 0 not null,
  ccsdchg     decimal(14,2) default 0 not null,
  ccsdspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccssdca1 on ccssdcaf
(
ccsdhcd,
ccsddpt,
ccsdyear,
ccsdper
);
create unique index ccssdca2 on ccssdcaf
(
ccsdhcd,
ccsdyear,
ccsdper,
ccsddpt
);
revoke all on ccssdcaf from public ; 
grant select on ccssdcaf to public ; 
