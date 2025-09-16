create table ibaccsaf
(
  ibccsgrp    varchar2(3) default ' ' not null,
  ibcccatg    varchar2(2) default ' ' not null,
  ibcccdat    varchar2(8) default ' ' not null,
  ibccctim    varchar2(8) default ' ' not null,
  ibcccuid    varchar2(10) default ' ' not null,
  ibccspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaccsa1 primary key( 
ibccsgrp,
ibcccatg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaccsa2 on ibaccsaf
(
ibcccatg,
ibccsgrp
)
  tablespace pas_indx; 
