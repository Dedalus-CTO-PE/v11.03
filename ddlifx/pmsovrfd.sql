create table pmsovraf
(
  pmorurno    char(8) default ' ' not null,
  pmordate    char(8) default ' ' not null,
  pmortime    char(8) default ' ' not null,
  dpmorcnt    char(2) default ' ' not null,
  pmorhosp    char(3) default ' ' not null,
  pmortrid    char(24) default ' ' not null,
  pmorfnam    char(40) default ' ' not null,
  pmormedn    char(10) default ' ' not null,
  pmormedr    char(1) default ' ' not null,
  pmorstat    char(4) default ' ' not null,
  pmoreror    char(100) default ' ' not null,
  pmorspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index pmsovra1 on pmsovraf
(
pmorurno,
pmordate,
pmortime,
dpmorcnt
);
create unique index pmsovra2 on pmsovraf
(
pmorhosp,
pmordate,
pmortime,
pmorurno,
dpmorcnt
);
revoke all on pmsovraf from public ; 
grant select on pmsovraf to public ; 
