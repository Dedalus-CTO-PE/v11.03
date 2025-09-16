create table oprrciaf
(
  oprclocn    char(3) default ' ' not null,
  oprcsdat    char(8) default ' ' not null,
  oprcstim    char(8) default ' ' not null,
  oprcedat    char(8) default ' ' not null,
  oprcetim    char(8) default ' ' not null,
  oprcreas    char(3) default ' ' not null,
  oprccsui    char(10) default ' ' not null,
  oprccdat    char(8) default ' ' not null,
  oprcctim    char(8) default ' ' not null,
  oprcceui    char(10) default ' ' not null,
  oprccedt    char(8) default ' ' not null,
  oprccetm    char(8) default ' ' not null,
  oprchosp    char(3) default ' ' not null,
  oprcspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index oprrcia1 on oprrciaf
(
oprclocn,
oprcsdat,
oprcstim,
oprchosp
);
create unique index oprrcia2 on oprrciaf
(
oprcsdat,
oprclocn,
oprcstim,
oprchosp
);
revoke all on oprrciaf from public ; 
grant select on oprrciaf to public ; 
