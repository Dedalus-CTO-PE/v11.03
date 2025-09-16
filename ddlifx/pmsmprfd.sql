create table pmsmpraf
(
  pmmpccod    char(3) default ' ' not null,
  pmmphfun    char(6) default ' ' not null,
  pmmphfty    char(3) default ' ' not null,
  pmmpmprc    char(8) default ' ' not null,
  dpmmpcnt    char(2) default ' ' not null,
  pmmppamt    decimal(14,2) default 0 not null,
  pmmpramt    decimal(14,2) default 0 not null,
  pmmpitmn    char(9) default ' ' not null,
  pmmpcnid    char(6) default ' ' not null,
  pmmpspar    char(74) default ' ' not null,
  lf          char(1)
);
create unique index pmsmpra1 on pmsmpraf
(
pmmpcnid,
pmmpccod,
pmmphfun,
pmmphfty,
pmmpmprc,
dpmmpcnt
);
create unique index pmsmpra2 on pmsmpraf
(
pmmpccod,
pmmphfun,
pmmphfty,
pmmpitmn,
pmmpcnid,
pmmpmprc,
dpmmpcnt
);
create unique index pmsmpra3 on pmsmpraf
(
pmmpmprc,
pmmpcnid,
pmmpccod,
pmmphfun,
pmmphfty,
dpmmpcnt
);
create unique index pmsmpra4 on pmsmpraf
(
pmmpccod,
pmmpcnid,
pmmphfun,
pmmphfty,
pmmpmprc,
dpmmpcnt
);
revoke all on pmsmpraf from public ; 
grant select on pmsmpraf to public ; 
