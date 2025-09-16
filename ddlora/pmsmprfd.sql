create table pmsmpraf
(
  pmmpccod    varchar2(3) default ' ' not null,
  pmmphfun    varchar2(6) default ' ' not null,
  pmmphfty    varchar2(3) default ' ' not null,
  pmmpmprc    varchar2(8) default ' ' not null,
  dpmmpcnt    varchar2(2) default ' ' not null,
  pmmppamt    number(14,2) default 0 not null,
  pmmpramt    number(14,2) default 0 not null,
  pmmpitmn    varchar2(9) default ' ' not null,
  pmmpcnid    varchar2(6) default ' ' not null,
  pmmpspar    varchar2(74) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmpra1 primary key( 
pmmpcnid,
pmmpccod,
pmmphfun,
pmmphfty,
pmmpmprc,
dpmmpcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsmpra2 on pmsmpraf
(
pmmpccod,
pmmphfun,
pmmphfty,
pmmpitmn,
pmmpcnid,
pmmpmprc,
dpmmpcnt
)
  tablespace pas_indx; 
create unique index pmsmpra3 on pmsmpraf
(
pmmpmprc,
pmmpcnid,
pmmpccod,
pmmphfun,
pmmphfty,
dpmmpcnt
)
  tablespace pas_indx; 
create unique index pmsmpra4 on pmsmpraf
(
pmmpccod,
pmmpcnid,
pmmphfun,
pmmphfty,
pmmpmprc,
dpmmpcnt
)
  tablespace pas_indx; 
