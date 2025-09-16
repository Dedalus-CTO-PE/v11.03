create table pmsdivaf
(
  pmdihosp    char(3) default ' ' not null,
  pmdidivn    char(3) default ' ' not null,
  pmdiunit    char(3) default ' ' not null,
  pmditeam    char(5) default ' ' not null,
  pmdiactv    char(1) default ' ' not null,
  pmdicuid    char(10) default ' ' not null,
  pmdicdat    char(8) default ' ' not null,
  pmdictim    char(8) default ' ' not null,
  pmdiuuid    char(10) default ' ' not null,
  pmdiudat    char(8) default ' ' not null,
  pmdiutim    char(8) default ' ' not null,
  pmdispar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsdiva1 on pmsdivaf
(
pmdihosp,
pmdidivn,
pmdiunit,
pmditeam
);
create unique index pmsdiva2 on pmsdivaf
(
pmdihosp,
pmdiunit,
pmditeam,
pmdidivn
);
revoke all on pmsdivaf from public ; 
grant select on pmsdivaf to public ; 
