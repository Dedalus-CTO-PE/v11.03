create table pmschiaf
(
  pmhiurno    char(8) default ' ' not null,
  pmhidate    char(8) default ' ' not null,
  pmhitime    char(8) default ' ' not null,
  pmhictyp    char(3) default ' ' not null,
  pmhicnum    char(20) default ' ' not null,
  pmhicexp    char(8) default ' ' not null,
  pmhiccol    char(3) default ' ' not null,
  pmhiatyp    char(1) default ' ' not null,
  pmhireas    char(3) default ' ' not null,
  pmhipexp    char(8) default ' ' not null,
  pmhipcol    char(3) default ' ' not null,
  pmhiauid    char(10) default ' ' not null,
  pmhispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmschia1 on pmschiaf
(
pmhiurno,
pmhidate,
pmhitime,
pmhictyp
);
revoke all on pmschiaf from public ; 
grant select on pmschiaf to public ; 
