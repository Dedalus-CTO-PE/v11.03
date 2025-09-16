create table mrtrexaf
(
  mrrxexid    char(4) default ' ' not null,
  mrrxdesc    char(35) default ' ' not null,
  mrrxdifr    char(8) default ' ' not null,
  mrrxdito    char(8) default ' ' not null,
  mrrxvifr    char(8) default ' ' not null,
  mrrxvito    char(8) default ' ' not null,
  mrrxunit    char(3) default ' ' not null,
  mrrxward    char(3) default ' ' not null,
  mrrxdoct    char(6) default ' ' not null,
  mrrxdecd    char(1) default ' ' not null,
  mrrxnoex    decimal(5,0) default 0 not null,
  mrrxprog    char(1) default ' ' not null,
  mrrxdia1    char(9) default ' ' not null,
  mrrxdia2    char(9) default ' ' not null,
  mrrxdia3    char(9) default ' ' not null,
  mrrxpro1    char(9) default ' ' not null,
  mrrxpro2    char(9) default ' ' not null,
  mrrxpro3    char(9) default ' ' not null,
  mrrxpdrg    char(4) default ' ' not null,
  mrrxdiso    char(1) default ' ' not null,
  mrrxurfr    char(8) default ' ' not null,
  mrrxurto    char(8) default ' ' not null,
  mrrxdtfr    char(3) default ' ' not null,
  mrrxdtto    char(3) default ' ' not null,
  mrrxhlfr    char(4) default ' ' not null,
  mrrxhlto    char(4) default ' ' not null,
  mrrxsmdy    char(1) default ' ' not null,
  mrrxcofr    char(4) default ' ' not null,
  mrrxcoto    char(4) default ' ' not null,
  mrrxsnag    char(3) default ' ' not null,
  mrrxcdfr    char(8) default ' ' not null,
  mrrxcdto    char(8) default ' ' not null,
  mrrxincm    char(1) default ' ' not null,
  mrrxaage    decimal(3,0) default 0 not null,
  mrrxgend    char(1) default ' ' not null,
  mrrxpost    char(8) default ' ' not null,
  mrrxcob     char(3) default ' ' not null,
  mrrxinvt    char(1) default ' ' not null,
  mrrxipri    char(1) default ' ' not null,
  mrrxinv1    char(1) default ' ' not null,
  mrrxinv2    char(1) default ' ' not null,
  mrrxblfr    char(4) default ' ' not null,
  mrrxblto    char(4) default ' ' not null,
  mrrxdgfr    char(4) default ' ' not null,
  mrrxdgto    char(4) default ' ' not null,
  mrrxhosp    char(3) default ' ' not null,
  mrrxhosf    char(3) default ' ' not null,
  mrrxhost    char(3) default ' ' not null,
  mrrxspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index mrtrexa1 on mrtrexaf
(
mrrxexid
);
create unique index mrtrexa2 on mrtrexaf
(
mrrxdesc,
mrrxexid
);
revoke all on mrtrexaf from public ; 
grant select on mrtrexaf to public ; 
