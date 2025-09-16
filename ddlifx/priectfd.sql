create table priectaf
(
  prechosp    char(3) default ' ' not null,
  dprecflg    char(2) default ' ' not null,
  prechfnd    char(6) default ' ' not null,
  precuniq    char(8) default ' ' not null,
  precinvn    char(8) default ' ' not null,
  precbatn    char(8) default ' ' not null,
  precurno    char(8) default ' ' not null,
  precpbat    char(8) default ' ' not null,
  precnbat    char(8) default ' ' not null,
  prectrid    char(24) default ' ' not null,
  preceetp    char(1) default ' ' not null,
  precamtc    decimal(14,2) default 0 not null,
  precamfp    decimal(14,2) default 0 not null,
  precammp    decimal(14,2) default 0 not null,
  precpdat    char(8) default ' ' not null,
  precstat    char(2) default ' ' not null,
  precftid    char(24) default ' ' not null,
  precprac    char(10) default ' ' not null,
  precspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index priecta1 on priectaf
(
prechosp,
dprecflg,
prechfnd,
precuniq,
precinvn,
precbatn
);
create unique index priecta2 on priectaf
(
precinvn,
precbatn
);
create unique index priecta3 on priectaf
(
precbatn,
precuniq,
precinvn
);
create unique index priecta4 on priectaf
(
precuniq,
precinvn,
precbatn
);
create unique index priecta5 on priectaf
(
prechosp,
precurno,
precuniq,
precinvn,
precbatn
);
create unique index priecta6 on priectaf
(
prectrid,
precinvn,
precbatn
);
create unique index priecta7 on priectaf
(
precprac,
prechosp,
dprecflg,
prechfnd,
precuniq,
precinvn,
precbatn
);
revoke all on priectaf from public ; 
grant select on priectaf to public ; 
