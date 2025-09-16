create table ibacosaf
(
  ibcosgrp    varchar2(3) default ' ' not null,
  ibcocatg    varchar2(2) default ' ' not null,
  ibcocatc    varchar2(3) default ' ' not null,
  ibcocdat    varchar2(8) default ' ' not null,
  ibcoctim    varchar2(8) default ' ' not null,
  ibcocuid    varchar2(10) default ' ' not null,
  ibcospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibacosa1 primary key( 
ibcosgrp,
ibcocatg,
ibcocatc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibacosa2 on ibacosaf
(
ibcocatg,
ibcocatc,
ibcosgrp
)
  tablespace pas_indx; 
