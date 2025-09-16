create table debdcmaf
(
  dbdcdeb     char(8) default ' ' not null,
  dbdclin     char(3) default ' ' not null,
  dbdccom     char(70) default ' ' not null,
  dbdcspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debdcma1 on debdcmaf
(
dbdcdeb,
dbdclin
);
revoke all on debdcmaf from public ; 
grant select on debdcmaf to public ; 
