create table ccsarcaf
(
  ccararc     char(4) default ' ' not null,
  ccardes     char(35) default ' ' not null,
  ccarcmp     decimal(1,0) default 0 not null,
  ccardir     char(40) default ' ' not null,
  ccarspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsarca1 on ccsarcaf
(
ccararc
);
revoke all on ccsarcaf from public ; 
grant select on ccsarcaf to public ; 
