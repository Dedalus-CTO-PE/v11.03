create table pmsufiaf
(
  pmufuogr    char(3) default ' ' not null,
  pmufuser    char(10) default ' ' not null,
  pmufhosp    char(3) default ' ' not null,
  pmuffavg    char(3) default ' ' not null,
  pmuffavd    char(3) default ' ' not null,
  pmufghed    char(3) default ' ' not null,
  pmufcode    char(9) default ' ' not null,
  pmufquan    char(6) default ' ' not null,
  pmufcdat    char(8) default ' ' not null,
  pmufctim    char(8) default ' ' not null,
  pmufcusr    char(10) default ' ' not null,
  pmufdesc    char(90) default ' ' not null,
  pmufspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsufia1 on pmsufiaf
(
pmufhosp,
pmufuogr,
pmufuser,
pmuffavg,
pmufghed,
pmufcode
);
create unique index pmsufia2 on pmsufiaf
(
pmufhosp,
pmufuogr,
pmuffavg,
pmufghed,
pmufuser,
pmufcode
);
create unique index pmsufia3 on pmsufiaf
(
pmufhosp,
pmufuser,
pmuffavg,
pmufghed,
pmufuogr,
pmufcode
);
revoke all on pmsufiaf from public ; 
grant select on pmsufiaf to public ; 
