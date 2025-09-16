create table ccscalaf
(
  cccayear    char(4) default ' ' not null,
  cccaper     char(2) default ' ' not null,
  cccades     char(15) default ' ' not null,
  cccafdt     char(8) default ' ' not null,
  cccatdt     char(8) default ' ' not null,
  cccastat    decimal(1,0) default 0 not null,
  cccaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscala1 on ccscalaf
(
cccayear,
cccaper
);
create unique index ccscala2 on ccscalaf
(
cccaper,
cccayear
);
create unique index ccscala3 on ccscalaf
(
cccatdt,
cccayear,
cccaper
);
revoke all on ccscalaf from public ; 
grant select on ccscalaf to public ; 
