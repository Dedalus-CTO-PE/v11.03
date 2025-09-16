create table apscilaf
(
  apcldoc     char(15) default ' ' not null,
  apclbch     char(5) default ' ' not null,
  apclcrd     char(5) default ' ' not null,
  apclref     char(15) default ' ' not null,
  apclspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index apscila1 on apscilaf
(
apcldoc,
apclbch,
apclcrd,
apclref
);
revoke all on apscilaf from public ; 
grant select on apscilaf to public ; 
