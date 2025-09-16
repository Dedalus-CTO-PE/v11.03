create table pmsufiaf
(
  pmufuogr    varchar2(3) default ' ' not null,
  pmufuser    varchar2(10) default ' ' not null,
  pmufhosp    varchar2(3) default ' ' not null,
  pmuffavg    varchar2(3) default ' ' not null,
  pmuffavd    varchar2(3) default ' ' not null,
  pmufghed    varchar2(3) default ' ' not null,
  pmufcode    varchar2(9) default ' ' not null,
  pmufquan    varchar2(6) default ' ' not null,
  pmufcdat    varchar2(8) default ' ' not null,
  pmufctim    varchar2(8) default ' ' not null,
  pmufcusr    varchar2(10) default ' ' not null,
  pmufdesc    varchar2(90) default ' ' not null,
  pmufspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsufia1 primary key( 
pmufhosp,
pmufuogr,
pmufuser,
pmuffavg,
pmufghed,
pmufcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsufia2 on pmsufiaf
(
pmufhosp,
pmufuogr,
pmuffavg,
pmufghed,
pmufuser,
pmufcode
)
  tablespace pas_indx; 
create unique index pmsufia3 on pmsufiaf
(
pmufhosp,
pmufuser,
pmuffavg,
pmufghed,
pmufuogr,
pmufcode
)
  tablespace pas_indx; 
