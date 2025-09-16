create table ccsbulaf
(
  ccbulin     char(3) default ' ' not null,
  ccbudat     char(70) default ' ' not null,
  ccbuspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccsbula1 on ccsbulaf
(
ccbulin
);
revoke all on ccsbulaf from public ; 
grant select on ccsbulaf to public ; 
