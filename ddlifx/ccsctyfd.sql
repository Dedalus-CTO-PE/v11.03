create table ccsctyaf
(
  ccctcty     char(4) default ' ' not null,
  ccctdes     char(35) default ' ' not null,
  ccctfix     char(1) default ' ' not null,
  ccctlab     char(1) default ' ' not null,
  ccctind     char(1) default ' ' not null,
  ccctspa     char(37) default ' ' not null,
  lf          char(1)
);
create unique index ccsctya1 on ccsctyaf
(
ccctcty
);
create unique index ccsctya2 on ccsctyaf
(
ccctdes,
ccctcty
);
revoke all on ccsctyaf from public ; 
grant select on ccsctyaf to public ; 
