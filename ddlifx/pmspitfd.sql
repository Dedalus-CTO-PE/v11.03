create table pmspitaf
(
  pmpiurno    char(8) default ' ' not null,
  pmpiatyp    char(3) default ' ' not null,
  pmpiclam    char(3) default ' ' not null,
  pmpifund    char(6) default ' ' not null,
  pmpitabt    char(3) default ' ' not null,
  pmpiedat    char(8) default ' ' not null,
  pmpiicnt    char(5) default ' ' not null,
  pmpirint    char(3) default ' ' not null,
  pmpifdat    char(8) default ' ' not null,
  pmpitdat    char(8) default ' ' not null,
  pmpidelt    char(1) default ' ' not null,
  pmpicdat    char(8) default ' ' not null,
  pmpictim    char(8) default ' ' not null,
  pmpicuid    char(10) default ' ' not null,
  pmpiudat    char(8) default ' ' not null,
  pmpiutim    char(8) default ' ' not null,
  pmpiuuid    char(10) default ' ' not null,
  pmpiddat    char(8) default ' ' not null,
  pmpidtim    char(8) default ' ' not null,
  pmpiduid    char(10) default ' ' not null,
  pmpispar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmspita1 on pmspitaf
(
pmpiurno,
pmpiatyp,
pmpiclam,
pmpifund,
pmpitabt,
pmpiedat,
pmpiicnt
);
revoke all on pmspitaf from public ; 
grant select on pmspitaf to public ; 
