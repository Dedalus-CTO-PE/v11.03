create table ccsgncaf
(
  ccgnhcd     char(2) default ' ' not null,
  ccgngpc     char(8) default ' ' not null,
  ccgndes     char(35) default ' ' not null,
  ccgnspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index ccsgnca1 on ccsgncaf
(
ccgnhcd,
ccgngpc
);
revoke all on ccsgncaf from public ; 
grant select on ccsgncaf to public ; 
