create table pmsuchaf
(
  pmuhurno    char(8) default ' ' not null,
  pmuhctyp    char(3) default ' ' not null,
  pmuhcnum    char(6) default ' ' not null,
  pmuhcuid    char(10) default ' ' not null,
  pmuhcdat    char(8) default ' ' not null,
  pmuhctim    char(8) default ' ' not null,
  pmuhoccg    char(3) default ' ' not null,
  pmuhdelt    char(1) default ' ' not null,
  pmuhduid    char(10) default ' ' not null,
  pmuhddat    char(8) default ' ' not null,
  pmuhdtim    char(8) default ' ' not null,
  pmuhdocg    char(3) default ' ' not null,
  pmuhspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsucha1 on pmsuchaf
(
pmuhurno,
pmuhctyp,
pmuhcnum
);
revoke all on pmsuchaf from public ; 
grant select on pmsuchaf to public ; 
