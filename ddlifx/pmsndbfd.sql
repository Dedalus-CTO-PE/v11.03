create table pmsndbaf
(
  pmnbdnam    char(50) default ' ' not null,
  pmnbddsc    char(100) default ' ' not null,
  pmnbgdat    char(50) default ' ' not null,
  pmnbdpth    char(500) default ' ' not null,
  pmnbhosp    char(3) default ' ' not null,
  pmnbedat    char(50) default ' ' not null,
  pmnbnpur    char(255) default ' ' not null,
  pmnbnsur    char(255) default ' ' not null,
  pmnbnmur    char(255) default ' ' not null,
  pmnbcuid    char(10) default ' ' not null,
  pmnbcdat    char(8) default ' ' not null,
  pmnbctim    char(8) default ' ' not null,
  pmnbuuid    char(10) default ' ' not null,
  pmnbudat    char(8) default ' ' not null,
  pmnbutim    char(8) default ' ' not null,
  pmnbspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsndba1 on pmsndbaf
(
pmnbdnam,
pmnbhosp
);
create unique index pmsndba2 on pmsndbaf
(
pmnbhosp,
pmnbdnam
);
revoke all on pmsndbaf from public ; 
grant select on pmsndbaf to public ; 
