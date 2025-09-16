create table pmsovvaf
(
  pmovurno    char(8) default ' ' not null,
  pmovdate    char(8) default ' ' not null,
  pmovtime    char(8) default ' ' not null,
  dpmovcnt    char(2) default ' ' not null,
  pmovhosp    char(3) default ' ' not null,
  pmovtrid    char(24) default ' ' not null,
  pmovsnam    char(40) default ' ' not null,
  pmovfnam    char(40) default ' ' not null,
  pmovvetn    char(9) default ' ' not null,
  pmovprdt    char(8) default ' ' not null,
  pmovstat    char(4) default ' ' not null,
  pmoveror    char(100) default ' ' not null,
  pmovvenc    char(4) default ' ' not null,
  pmovspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index pmsovva1 on pmsovvaf
(
pmovurno,
pmovdate,
pmovtime,
dpmovcnt
);
create unique index pmsovva2 on pmsovvaf
(
pmovhosp,
pmovdate,
pmovtime,
pmovurno,
dpmovcnt
);
revoke all on pmsovvaf from public ; 
grant select on pmsovvaf to public ; 
