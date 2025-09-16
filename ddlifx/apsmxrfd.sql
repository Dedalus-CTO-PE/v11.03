create table apsmxraf
(
  apmxcrd     char(5) default ' ' not null,
  apmxref     char(30) default ' ' not null,
  apmxtyp     char(1) default ' ' not null,
  apmxspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index apsmxra1 on apsmxraf
(
apmxref,
apmxcrd
);
create unique index apsmxra2 on apsmxraf
(
apmxcrd,
apmxref
);
revoke all on apsmxraf from public ; 
grant select on apsmxraf to public ; 
