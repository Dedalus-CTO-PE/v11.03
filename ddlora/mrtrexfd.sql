create table mrtrexaf
(
  mrrxexid    varchar2(4) default ' ' not null,
  mrrxdesc    varchar2(35) default ' ' not null,
  mrrxdifr    varchar2(8) default ' ' not null,
  mrrxdito    varchar2(8) default ' ' not null,
  mrrxvifr    varchar2(8) default ' ' not null,
  mrrxvito    varchar2(8) default ' ' not null,
  mrrxunit    varchar2(3) default ' ' not null,
  mrrxward    varchar2(3) default ' ' not null,
  mrrxdoct    varchar2(6) default ' ' not null,
  mrrxdecd    varchar2(1) default ' ' not null,
  mrrxnoex    number(5,0) default 0 not null,
  mrrxprog    varchar2(1) default ' ' not null,
  mrrxdia1    varchar2(9) default ' ' not null,
  mrrxdia2    varchar2(9) default ' ' not null,
  mrrxdia3    varchar2(9) default ' ' not null,
  mrrxpro1    varchar2(9) default ' ' not null,
  mrrxpro2    varchar2(9) default ' ' not null,
  mrrxpro3    varchar2(9) default ' ' not null,
  mrrxpdrg    varchar2(4) default ' ' not null,
  mrrxdiso    varchar2(1) default ' ' not null,
  mrrxurfr    varchar2(8) default ' ' not null,
  mrrxurto    varchar2(8) default ' ' not null,
  mrrxdtfr    varchar2(3) default ' ' not null,
  mrrxdtto    varchar2(3) default ' ' not null,
  mrrxhlfr    varchar2(4) default ' ' not null,
  mrrxhlto    varchar2(4) default ' ' not null,
  mrrxsmdy    varchar2(1) default ' ' not null,
  mrrxcofr    varchar2(4) default ' ' not null,
  mrrxcoto    varchar2(4) default ' ' not null,
  mrrxsnag    varchar2(3) default ' ' not null,
  mrrxcdfr    varchar2(8) default ' ' not null,
  mrrxcdto    varchar2(8) default ' ' not null,
  mrrxincm    varchar2(1) default ' ' not null,
  mrrxaage    number(3,0) default 0 not null,
  mrrxgend    varchar2(1) default ' ' not null,
  mrrxpost    varchar2(8) default ' ' not null,
  mrrxcob     varchar2(3) default ' ' not null,
  mrrxinvt    varchar2(1) default ' ' not null,
  mrrxipri    varchar2(1) default ' ' not null,
  mrrxinv1    varchar2(1) default ' ' not null,
  mrrxinv2    varchar2(1) default ' ' not null,
  mrrxblfr    varchar2(4) default ' ' not null,
  mrrxblto    varchar2(4) default ' ' not null,
  mrrxdgfr    varchar2(4) default ' ' not null,
  mrrxdgto    varchar2(4) default ' ' not null,
  mrrxhosp    varchar2(3) default ' ' not null,
  mrrxhosf    varchar2(3) default ' ' not null,
  mrrxhost    varchar2(3) default ' ' not null,
  mrrxspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtrexa1 primary key( 
mrrxexid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtrexa2 on mrtrexaf
(
mrrxdesc,
mrrxexid
)
  tablespace pas_indx; 
