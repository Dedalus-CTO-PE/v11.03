create table emrmanaf
(
  demmascr    char(2) default ' ' not null,
  demmafld    char(5) default ' ' not null,
  emmaresp    char(1) default ' ' not null,
  emmaspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index emrmana1 on emrmanaf
(
demmascr,
demmafld
);
revoke all on emrmanaf from public ; 
grant select on emrmanaf to public ; 
